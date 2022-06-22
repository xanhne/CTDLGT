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
#define ms(n,s) memset(s,n,sizeof(s))
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
ll n;
bool used[1005];
int a[1005];
vi v;
multiset<string>m;
void ql(int i){
	for(int j = 1; j <= n; j++){
		if(!used[j]){
			a[i] = j;
			used[j] = true;
			if(i == n){
				string x="";
				for(int g = 1; g <= n; g++){
					if(g!=n){
						cout << v[a[g]-1] <<" ";
					}
					else cout << v[a[g]-1];
				}
				//m.insert(x);
				cout << endl;
			}else ql(i+1);
			used[j] = false;
		}
	}
}
/**/
main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	cin >> n;
    	memset(used,false,sizeof(used));
    	f0(i,n){
    		int x; cin >> x;
    		v.pb(x);
		}
		sort(v.begin(),v.end());
		ql(1);
		//for(auto i:m) cout << i << endl;
    }
}
/*THE END*/



