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
int n,k;
char c;
vi v;

void ql(int id, int vt, string s){
	if(id == k){
		cout << s << endl;
		return;
	}
	for(int i = vt; i < v.size(); i++){
		ql(id+1,i,s + (char)(v[i] +'A'));
	}
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t=1;
    //cin>>t;
    while(t--){
    	v.clear();
    	cin >> c >> k;
    	for(int i = 0; i <= c-65;i++){
    		v.pb(i);
		}
		ql(0,0,"");
    }
}
/*THE END*/



