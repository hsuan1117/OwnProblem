@echo off
echo =================
echo === Auto Sync ===
echo =================
cd D:\OwnProblem
git add .
set /p MSG = "Commit msg: "
git commit -a -m MSG
git push
pause