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

bool cmp(pi a, pi b){
	if(a.se < b.se) return true;
	if(a.fi == b.fi){
		if(a.se  < b.se) return true;
	}
	return false;
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	int n; cin >> n;
    	ll a[n],b[n];
    	f0(i,n) cin >> a[i];
    	f0(i,n) cin >> b[i];
    	ll sum = 0;
    	sort(a,a+n); sort(b,b+n,greater<ll>());
    	f0(i,n){
    		sum += 1LL*a[i]*b[i];
		}
		cout << sum << endl;
    }
}
/*THE END*/

