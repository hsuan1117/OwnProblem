echo =================
echo === Auto Sync ===
echo =================
cd ~/Desktop/OwnProblem
git pull origin master --allow-unrelated-histories
git add .
git commit -m "sync"
git push