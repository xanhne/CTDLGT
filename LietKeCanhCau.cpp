#include<bits/stdc++.h>
using namespace std;
/*Start*/
/*

  by Phong5G
  
*/

#define ll long long
#define db double
#define fi first
#define se second
#define mp make_pair
#define ms(s,n) memset(s,n,sizeof(s))
#define pb push_back
#define f0(i,n) for (int i = 0; i < n; i++)
#define f1(i,n) for (int i = 1; i <= n; i++)
#define maxn 50004

typedef pair <int,int> pi;
typedef vector<int> vi;
typedef vector<pi> vii;

const ll oo=1e13;
const int mod=1e9+7;
const int N=1e6+5;

vi v[1005];
bool used[1005];
int n,m,s, x1 , x2;

void dfs(int u){
	used[u] = true;
	for(int x:v[u]){
		if(x  == x1 && u == x2 || x == x2 && u == x1) continue;
		if(!used[x]) dfs(x);
	}
}

void bfs(int u){
	queue<int>q;
	used[u] = true;
	q.push(u);
	cout << u  <<" ";
	while(!q.empty()){
		int tmp = q.front(); q.pop();
		for(int x : v[tmp]){
			if(!used[x]){
				used[x] = true;
				cout << x <<" ";
				q.push(x);
			}
		}
	}
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m ;
    	for(int i = 0; i <= 1004; i++) v[i].clear();
    	ms(used,false);
    	pi a[m];
    	f0(i,m){
    		int x,y; cin >> x >> y;
    		a[i] = {x,y};
    		v[x].pb(y); v[y].pb(x);
		}
		for(pi i : a){
			int d = 0;
			ms(used,false);
			x1 = i.fi; x2 = i.se;
			f1(j,n){
				if(!used[j]){
					d++;
					dfs(j);
				}
			}
			if(d > 1){
				cout << min(i.fi, i.se) <<" "<<max(i.fi, i.se) <<" ";
			}
		}
		cout << endl;
    }
}
/*THE END*/
