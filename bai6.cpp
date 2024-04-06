#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
    	map<int, int> m1, m2, m3;
		int n, m; cin >> n >> m;
		for(int i = 0; i < n; ++i){
			int x; cin >> x;
			m1[x]++;
			m3[x]++;
		}
		for(int i = 0; i < m; ++i){
			int x; cin >> x;
			m2[x]++;
			m3[x]++;
		}
		for(auto it : m3) cout << it.first << " ";cout << endl;
		for(auto it : m1)
			if(m2[it.first]) cout << it.first << " ";
		cout << endl;
    }
}
