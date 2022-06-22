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
    	int n; cin >> n;
    	int x,y;
    	deque<int>q;
    	while(n--){
    		cin >> x;
    		if(x == 1){
    			cout << q.size()<<endl;
			}else if(x == 2){
				if(q.empty()) cout <<"YES\n";
				else cout <<"NO\n";
			}
			else if(x == 3){
				cin >> y; q.push_back(y);
			}else if(x == 4){
				if(!q.empty()) q.pop_front();
			}else if(x == 5){
				if(!q.empty()) cout << q.front();
				else cout << -1;
				cout << endl;
			}else{
				if(!q.empty()) cout << q.back();
				else cout << -1;
				cout << endl;
			}
		}
		cout << endl;
    }
}
/*THE END*/



