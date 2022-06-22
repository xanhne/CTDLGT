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
int n,m,s;

void dfs(int u){
	cout << u << " ";
	used[u] = true;
	for(int x:v[u]){
		if(!used[x]) dfs(x);
	}
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m >> s;
    	for(int i = 0; i <= 1004; i++) v[i].clear();
    	ms(used,false);
    	f1(i,m){
    		int x,y; cin >> x >> y;
    		v[x].pb(y); v[y].pb(x);
		}
		dfs(s);
		cout << endl;
    }
}
/*THE END*/


