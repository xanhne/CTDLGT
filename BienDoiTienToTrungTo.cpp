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
    	string s; cin >> s;
    	stack<string>st1,st2;
    	for(int i = s.size() - 1; i >= 0;i--){
    		if(isalpha(s[i])){
    			st1.push(string(1,s[i]));
			}else{
				string x = "(";
				string x1 = st1.top(); st1.pop();
				string x2 = st1.top(); st1.pop();
				x = x + x1 +string(1,s[i])+x2 +')';
				st1.push(x);
			}
		}
		cout << st1.top() << endl;
    }
}
/*THE END*/



