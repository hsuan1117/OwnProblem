@echo off
echo =================
echo === Auto Sync ===
echo =================
cd ../%cd%
git add .
git commit -a -m "sync" 
git push
pause