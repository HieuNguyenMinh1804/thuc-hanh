#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;

int check(vector<ll> v){
	int l = 0, r = v.size()-1;
	while(l < r){
		if(v[l] != v[r]) return 0;
		l++; r--;
	}
	return 1;
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
		ll n, b; cin >> n >> b;
		vector<ll> v;
		while(n){
			v.push_back(n%b);
			n /= b;
		}
		cout << check(v) << endl;
    }
}
