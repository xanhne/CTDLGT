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
int n,m,s,c;
int pre[1005];

void dfs(int u){
	used[u] = true;
	for(int x:v[u]){
		if(!used[x]){
			pre[x] = u;
			dfs(x);
		}
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
    	cin >> n >> m >> s >> c;
    	for(int i = 1; i <= 1005; i++) v[i].clear();
    	ms(pre,0);
    	ms(used,false);
    	f1(i,m){
    		int x,y; cin >> x >> y;
    		v[x].pb(y);
		}
		dfs(s);
		if(!used[c]){
			cout <<"-1\n";
			continue;
		}
		vi ve;
		while(s!=c){
			ve.pb(c);
			c = pre[c];
		}
		ve.pb(s);
		reverse(ve.begin(),ve.end());
		for(int i : ve) cout << i <<" ";
		cout << endl;
    }
}
/*THE END*/
