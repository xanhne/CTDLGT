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
    	int n,k; cin >> n;
    	k = n;
    	string x = "";
    	while(n!=0){
    		char c = (n%2) + '0';
    		x = x + c;
    		n/=2;
		}
		reverse(x.begin(),x.end());
		queue<string>q; q.push("1"); 
		cout << 1 << " ";
		while(1){
			vector<string>v;
			int ok = 0;
			while(!q.empty()){
				v.pb(q.front() + "0");
				v.pb(q.front() + "1"); q.pop();
			}
			for(string i: v){
				cout << i <<" "; q.push(i);
				if(i == x){
					ok = 1; break;
				}
			}
			if(ok) break;
		}
		cout << endl;
    }
}
/*THE END*/



