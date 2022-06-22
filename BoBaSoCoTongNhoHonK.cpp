#include<bits/stdc++.h>
using namespace std;

main(){
	int t; cin >> t;
	while(t--){
		long long k;
		int n; cin >> n >> k;
		long long a[n];
		map<long long,long long>mp;
		for(auto &i:a){
			cin >> i;
		}
		sort(a,a+n);
		long long count = 0;
		vector<long long> v(a,a+n);
		for(int i = 0; i < n-2;i++){
			int j = i + 1, g = n - 1;
			while(j < g){
				if(a[i] + a[j] + a[g] >= k) g--;
				else{
					count += (g - j); 
					j++;
				}
			}
		}
		cout << count << endl;
	}
}

