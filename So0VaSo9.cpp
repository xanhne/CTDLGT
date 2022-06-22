#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		string s;
		int n; cin >> n;
		queue<string>q;
		q.push("9");
		while(!q.empty()){
			string k = q.front();q.pop();
			if(stoll(k)%n == 0){
				s = k; break;
			}
			q.push(k+"0");
			q.push(k+"9");
		}
		cout << s << endl;
	}
}
