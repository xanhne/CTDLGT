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

int n,m;


main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    cin>>t;
    while(t--){
    	cin >> n >> m;
    	int ok = 0;
    	int IN[n+1]={0},OUT[n+1]={0};
    	f0(i,m){
    		int x,y; cin >> x >> y; IN[y]++;OUT[x]++;
		}
		int cnt = 0,cnt1=0;
		f1(i,n){
			if((IN[i]+OUT[i])% 2 == 0){
				cnt++;
			}else cnt1++;
		}
		if(cnt == n) cout << 2;
		else if(cnt1 == 2) cout << 1;
		else cout << 0;
		cout << endl;
    }
}
/*THE END*/
