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
    	bool used[100005];
    	ms(used,false);
    	int pre[100005];
    	int a[n];
    	f0(i,n) cin >> a[i];
    	stack<int>st;
    	st.push(0);
    	f1(i,n-1){
    		while(!st.empty() && a[i] > a[st.top()]){
    			used[st.top()] = true;
    			pre[st.top()] = i;
    			st.pop();
			}
			st.push(i);
		}
		f0(i,n){
			if(!used[i]) cout <<-1<<" ";
			else cout <<a[pre[i]]<<" ";
		}
		cout << endl;
    }
}
/*THE END*/



