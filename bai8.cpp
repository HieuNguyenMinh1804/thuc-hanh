#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t; cin >> t;
    while(t--){
		string s; cin >> s;
		int m[10] = {};
		for(char i : s) m[i-'0'] ++;
		int ma = -1, num;
		for(int i = 0; i < 10; ++i){
			if(m[i]%2){
				if(ma <= m[i]){
					ma = m[i];
					num = i;
				}
			}
		}
		string res = "";
		if(ma != -1){
			for(int i = 0; i < 10; ++i){
				if(m[i]%2 && m[i] <= ma){
					if(num != i) m[i] = 0;
				}
			}	
			while(m[num]){
				res += (num + '0');
				m[num] --;
			}
		}		
		for(int i = 0; i <= 9; ++i){
			while(m[i]){
				string tmp = to_string(i);
				res += (tmp);
				res.insert(0, tmp);
				m[i] -= 2;
			}
		}
		while(res[0] == '0') res.erase(0, 1);
		while(res[res.size()-1] == '0') res.erase(res.size()-1, 1);
		if(res.size() == 0){
			for(char i : s) m[i-'0'] ++;
			int maxi = -1, x;
			for(int i = 1; i < 10; ++i){
				if(m[i] >= maxi){
					maxi = m[i];
					x = i;
				}
			}
			for(int i = 1; i <= m[x]; ++i) cout << x;
		}
		else cout << res;
		cout << endl;
    }
}
