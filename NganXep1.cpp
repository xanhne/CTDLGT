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
    //cin>>t;
    while(t--){
    	string s;
    	stack<ll>st;
    	while(getline(cin,s)){
    		stringstream ss(s);
    		int d = 0;
    		string x1="",x2="",token;
    		while(ss >> token){
    			if(!d){
    				x1 = token; d = 1;
				}else x2 = token;
			}
			if(x1 =="push"){
				st.push(stoll(x2));
			}else if(x1 == "pop"){
				st.pop();
			}else if(x1 =="show"){
				if(st.empty()){
					cout <<"empty\n";
					continue;
				}
				vector<ll>v;
				while(!st.empty()){
					v.pb(st.top()); st.pop();
				}
				reverse(v.begin(),v.end());
				for(ll i:v){
					cout << i <<" ";
					st.push(i);
				}
				cout << endl;
			}
		}
    }
}
/*THE END*/



