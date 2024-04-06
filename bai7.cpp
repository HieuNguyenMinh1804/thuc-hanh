#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
		string s; cin >> s;
		int dem = 0, n = s.size();
		for(int i = 0; i < n; ++i){
			if(isdigit(s[i])){
				while(i < n && isdigit(s[i])) i ++;
				dem ++;
			}
		}
		cout << dem << endl;
    }
}
