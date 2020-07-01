@echo off
echo =================
echo === Auto Sync ===
echo =================
cd %cd%\..\
git add .
set /p MSG = "Commit msg: "
git commit -a -m MSG
git push
pause