#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
		ll n; cin >> n;
		ll a[n];
		for(ll &x : a) cin >> x;
		sort(a, a+n);
		ll ans = 0, res = 0;
		for(int i = 1; i < n; ++i) ans = __gcd(ans, a[i]-a[0]);
	    for(int i=1;i<=sqrt(ans);i++){
	        if (ans % i == 0){
	            if (i != ans/i) res+=2;
	            else res++;
	        }
	    }
		cout << res << endl;
    }
}
