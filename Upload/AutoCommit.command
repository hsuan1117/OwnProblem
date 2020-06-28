echo =================
echo === Auto Sync ===
echo =================
cd ~/Desktop/Hsuan
git pull origin master --allow-unrelated-histories
git add .
git commit -m "sync"
git push