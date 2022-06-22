#include<bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--){
		long long n,k; 
		cin >> n >> k;
		long long a[n];
		for(auto &i:a){
			cin >> i;
		}
		multiset<long long>mu;
		for(int i = 0; i < k; i++){
			mu.insert(a[i]);
		}
		
		auto it = mu.rbegin();
		cout << *it <<" ";
		for(int i = 1; i < n - k + 1; i++){
			mu.erase(mu.find(a[i-1]));
			mu.insert(a[i + k -1]);
			auto it = mu.rbegin();
			cout << *it <<" ";
		}
		cout << endl;
	}
}
