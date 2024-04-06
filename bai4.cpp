#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
		int n, m, k; cin >> n >> m >> k;
		int a[n][m];
		for(int i = 0; i < n; ++i){
			for(int j = 0; j < m; ++j) cin >> a[i][j];
		}
		int l = 0, r = m-1, t = 0, b = n-1;
		ll sum = 0;
		vector<int> v;
		while(l <= r && t <= b){
			for(int i = l; i <= r; ++i) v.push_back(a[t][i]);
			t++;
			for(int i = t; i <= b; ++i) v.push_back(a[i][r]);
			r--;
			if(l > r || t > b) break;
			for(int i = r; i >= l; --i) v.push_back(a[b][i]);
			b--;
			for(int i = b; i >= t; --i) v.push_back(a[i][l]);
			l ++;
		}
		for(int i = 0; i < k; ++i) sum += v[i];
		cout << sum << endl;
    }
}
