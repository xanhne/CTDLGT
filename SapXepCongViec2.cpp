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


void ql(ll tu, ll mau){
	if(mau%tu == 0){
		cout << 1 <<"/"<<mau/tu<<endl;
		return;
	}
	ll tmp = (mau/tu) + 1;
	cout << 1 <<"/"<<tmp<<" + ";
	ll mc = mau * tmp;
	ll tumoi = tu * tmp - mau;
	ql(tumoi,mc);
}

struct CV{
	int jb,de,pro;
};

bool cmp(CV a, CV b){
	if(a.pro == b.pro) return a.de < b.de;
	return a.pro > b.pro;
}

main(){
    ios_base::sync_with_stdio(0);cin.tie(0);
    // freopen("input.txt", "r", stdin);
	  // freopen("output.txt", "w", stdout);
    int t = 1; 
	cin >> t;
	while(t--){
		int n; cin >> n;
		CV a[n];
		f0(i,n){
			cin >> a[i].jb >> a[i].de >> a[i].pro;
		}
		bool used[1005]; ms(used,false);
		sort(a,a+n,cmp);
		ll ln = 0;
		int dem = 0;
		for(int i = 0;i < n; i++){
			while(used[a[i].de] && a[i].de > 0) a[i].de--;
			if(!used[a[i].de] && a[i].de > 0){
				dem++;
				ln += a[i].pro; used[a[i].de] = true;
			}
		}
		cout << dem <<" "<<ln << endl;
	}
}
/*THE END*/



