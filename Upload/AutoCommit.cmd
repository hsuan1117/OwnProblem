@echo off
echo =================
echo === Auto Sync ===
echo =================
cd D:\OwnProblem
git add .
git commit -a -m "sync" 
git push
pause