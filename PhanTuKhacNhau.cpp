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




main(){
    //ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	ll n,vt = 0,ok = 0; cin >> n;
    	ll a[n];
    	f0(i,n) cin >> a[i];
    	f0(i,n-1){
    		ll x; cin >> x;
    		if(x!=a[i] && ok == 0) {
    			ok = 1; vt = i;
			} 
		}
		if(!ok) cout << n;
		else cout << vt+1;
		cout << endl;
    }
}
/*THE END*/



