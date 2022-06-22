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

int hack(char c, int a, int b){
	if(c=='+') return a+b;
	if(c == '-') return a-b;
	if(c == '*') return a*b;
	return a/b;
}


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	int n,m; cin >> n >> m;
    	multiset<int>mu[n+1];
    	f1(i,m){
    		int x,y; cin >> x >> y;
    		mu[x].insert(y);
		}
		f1(i,n){
			cout <<i<<": ";
			for(auto it : mu[i]){
				cout << it <<" ";
			}
			cout << endl;
		}
    }
}
/*THE END*/


