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
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	int n,d; cin >> n >> d;
    	if(d*9 < n) cout << -1;
    	else{
    		int a[1005]={0};
    		a[0] = 1; n--;
    		for(int i = d-1; i >= 1; i--){
    			if(n >= 9){
    				a[i] = 9; 
    				n-=9;
				}else{
					a[i] = n; n = 0;
				}
			}
			a[0] += n;
			for(int i = 0; i < d; i++) cout << a[i];
		}
		cout << endl;
    }
}
/*THE END*/



