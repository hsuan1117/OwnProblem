// Solution - 511

#include<iostream>
using namespace std;
int dis[1000][1000];
int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int N, M;
    while(cin >> N >> M){
        
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                if (i == j) dis[i][j] = 0;
                else dis[i][j] = -1;
            }
        }
        for (int i = 0; i < M; i++) {
            int u, v, w;
            cin >> u >> v >> w;
            if (dis[u][v] > w || dis[u][v] == -1) dis[u][v] = w;
        }
        int Q;
        cin >> Q;
        for (int k = 1; k <= N; k++) {
            for (int i = 1; i <= N; i++) {
                for (int j = 1; j <= N; j++) {
                    if (dis[i][j] == -1 && dis[i][k] != -1 && dis[k][j] != -1) dis[i][j] = dis[i][k] + dis[k][j];
                    else if (dis[i][j] != 0 && dis[i][k] != -1 && dis[k][j] != -1) dis[i][j] = min(dis[i][j], dis[i][k] + dis[k][j]);
                }
            }
        }
        for (int i = 0; i < Q; i++) {
            int u, v;
            cin >> u >> v;
            cout << dis[u][v] << '\n';
        }
    }
    return 0;
}