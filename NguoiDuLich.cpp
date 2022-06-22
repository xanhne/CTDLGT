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
bool used[1005];
int a[20][20];
int n;
int omp = 0;
int dmin = INT_MAX;
int opt = INT_MAX;
int b[1005];
void ql(int i){
	for(int j = 2; j <= n;j++){
		if(!used[j]){
			b[i] = j; used[j] = true;
			omp += a[b[i-1]][b[i]];
			if(i == n) opt = min(opt,omp + a[b[n]][1]);
			else if(omp + (n-i+1)*dmin < opt){
				ql(i+1);
			}
			used[j] = false;omp -= a[b[i-1]][b[i]];
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
    	f1(i,n){
    		f1(j,n){
    			cin >> a[i][j];
    			dmin = min(dmin,a[i][j]);
			}
		}
		b[1]=1;
		ql(2);
		cout << opt;
    }
}
/*THE END*/



