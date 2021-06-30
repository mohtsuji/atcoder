#include <bits/stdc++.h>
//#include <atcoder/all>
//#define rep(i, a, b) for(int i=(a);i<(b);++i)
//#define rep(i, a, b) FOR(i, a, b)
#define ll long long
#define dev(i, tako) printf("%i\n", tako)
#define whole(x) (x).begin(),(x).end()
#define rwhole(x) (x).rbegin(), (x).rend()
using namespace std;


typedef	pair<int, int> P;
const int	INF = 1001001001;
const int	di[] = {-1, 0, 1, 0};
const int	dj[] = {0, -1, 0, 1};


int	main(){
	cin.tie(0);
    ios::sync_with_stdio(false);
    cout << fixed << setprecision(15);

	int	ans = 0;
	int	h, w;
	cin >> h >> w;
	vector<string> s(h);
	for (int i = 0; i<h; i++)
		cin >> s[i];
	for (int si = 0; si < h; si++)
	{
		for (int sj = 0; sj<w; sj++)
		{
			if (s[si][sj] == '#') continue;
			vector<vector<int>> dist(h, vector<int>(w, INF));
			queue<P> q;
			auto update = [&](int i, int j, int x){  //ラムダ式（main内で関数を作成）
				if (dist[i][j] != INF) return ;  //bfsの時に既に書き換わってるところはスルー
				dist[i][j] = x;
				q.push(P(i, j));
			};
			update(si, sj, 0); //探索開始地点を０に設定
			while (!q.empty()){  //bfs開始
				int i = q.front().first;
				int j = q.front().second; q.pop();
				for (int dir = 0; dir < 4; dir++){  //上下左右に＋１して、それらをqueueに格納
					int	ni = i + di[dir], nj = j + dj[dir];
					if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
					if (s[ni][nj] == '#') continue ;  //オリジナルのmapで'#'だったらスルー
					update(ni, nj, dist[i][j] + 1);
				}
			}
			for (int i = 0; i<h; i++){
				for (int j = 0; j < w; j++){
					if (dist[i][j] == INF) continue ;
					ans = max(ans, dist[i][j]);
				}
			}
		}
	}

	cout << ans << endl;
	return 0;
}

/*~~~~~~nyanndane~~~~~*/
