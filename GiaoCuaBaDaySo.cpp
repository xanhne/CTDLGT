#include <bits/stdc++.h>
using namespace std;
#define run() int t;cin>>t;while(t--)
#define k() cout<<"\n";
void nhap(long long a[],int n){
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
}
main(){
	run(){
		int n,m,p,x=0,y=0,z=0;
		scanf("%d%d%d",&n,&m,&p);
		long long a[n],b[m],c[p];nhap(a,n);nhap(b,m);nhap(c,p);
		for(int i=0;i<n;i++){
			while(a[i]>b[y]&&y<m) y++;
			while(a[i]>c[z]&&z<p) z++;
			if(a[i]==b[y]&&a[i]==c[z]){
				y++;
				z++;
				cout<<a[i]<<" ";
				x=1;
			}
		}
		if(x==0) cout<<"-1";
		k()
	}
}
