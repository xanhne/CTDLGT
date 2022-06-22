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
    	string s; cin >> s;
    	bool used[100005];
    	ms(used,false);
    	stack<char>st,st1,st2;
    	for(int i = 0; i < s.size(); i++){
    		if(s[i] == ')'){
    			for(int j = i - 1; j >= 0; j--){
    				if(!used[j] && s[j] =='('){
    					used[i] = true;
    					used[j] = true; break;
					}
				}
			}
		}
		for(int i = 0; i < s.size(); i++){
    		if(!used[i]){
    			if(s[i] =='(') st1.push(s[i]);
    			else st2.push(s[i]);
			}
		}
		int dem = 0,d1 = 0,d2 = 0;
		if(st1.size()%2==0){
			dem += st1.size()/2;
		}else{
			if(st1.size() < 2){
				d1 = st1.size();
			}else{
				dem += st1.size()/2;
				d1 = st1.size()%2;
			}
		}
		if(st2.size()%2==0){
			dem += st2.size()/2;
		}else{
			if(st2.size() < 2){
				d2 = st2.size();
			}else{
				dem += st2.size()/2;
				d2 = st2.size()%2;
			}
		}
		cout << dem + d1 + d2 <<  endl;
		
    }
}
/*THE END*/
