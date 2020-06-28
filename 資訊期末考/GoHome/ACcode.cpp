// Solution - Jonason
#include<bits/stdc++.h>

#define iii ios::sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define pb push_back
#define pii pair <int, int> 
#define fi first
#define se second
#define ll long long
using namespace std;
const int M = 1e9;
int dis[1000][1000];

inline void init(int x = 1000) {
  for (int i = 1; i <= x; i++) {
    for (int j = 1; j <= x; j++) {
      if (i == j) dis[i][j] = 0;
      else dis[i][j] = M;
    }
  }
}

inline void floyd(int x) {
  for (int k = 1; k <= x; k++) {
    for (int i = 1; i <= x; i++) {
      for (int j = 1; j <= x; j++) {
        if (dis[i][j] > dis[i][k] + dis[k][j]) dis[i][j] = dis[i][k] + dis[k][j];
      }
    }
  }
}

int main() {
  iii
  int t, m, n, q, u, v, w, a, b;
  while (cin >> n >> m) {
    init();
    while (m--) {
      cin >> u >> v >> w;
      dis[u][v] = min(dis[u][v], w);
    }
    floyd(n);
    cin >> q;
    while (q--) {
      cin >> a >> b;
      if (dis[a][b] == 1e9) {
        cout << -1 << endl;
      } else cout << dis[a][b] << endl;
    }
  }
  return 0;
}