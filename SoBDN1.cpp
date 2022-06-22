#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		long long n; cin >> n;
		queue<long long> q;
		q.push(1);
		long long d = 0;
		while(!q.empty()){
			long long tmp = q.front(); q.pop();
			if(tmp <= n){
				d = d + 1;
			}else break;
			q.push(tmp * 10);
			q.push(tmp *10 + 1);
		}
		cout << d << endl;
	}
}
