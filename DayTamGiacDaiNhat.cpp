#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int a[n];
		int ans = INT_MIN;
		int ok1 = 0;
		for(int i = 0; i < n;i++){
			cin >> a[i];
			if(i >= 1){
				if(a[i] != a[i-1]) ok1 = 1;
			}
		}
		int dp1[n+1], dp2[n+1];
		dp1[0] = 1;dp2[0] = 1;
		for(int i = 1; i < n; i++){
			dp1[i] = 1;
			if(a[i] > a[i-1]) dp1[i] += dp1[i-1];
		}
//			for(int i = 0; i < n; i++){
//				cout << i <<" "<< dp1[i] <<endl;
//			}
//			cout << endl;
		reverse(a,a+n);
		for(int i = 1; i < n; i++){
			dp2[i] = 1;
			if(a[i] > a[i-1]) dp2[i] += dp2[i-1];
		}
		for(int i = 0; i < n; i++){
			//cout << dp1[i] + dp2[n-i-1] - 1 << endl;
			ans = max(ans,(dp1[i]+dp2[n-i-1])-1);
		}
		cout << ans << endl;
	}
}

