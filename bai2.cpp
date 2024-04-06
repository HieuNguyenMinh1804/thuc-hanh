#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
#define fast(); ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
using namespace std;
int main(){
	fast();
	int t; cin >> t;
	while(t--){
		string s1, s2, dif;
		cin >> s1 >> s2;
		if(s2.size() > s1.size()) swap(s1,s2);
		else if(s2.size() == s1.size() && s2 > s1) swap(s1,s2);
		int i = s1.size()-1;
		int j = s2.size()-1;
		int nho=0;
		int tru;
		while(j >= 0){
			tru=(s1[i]-'0')-(s2[j]-'0'+nho);
			if(tru < 0){
				nho = 1;
				tru += 10;
				dif += (char)tru+'0';
			}
			else{
				dif += (char)tru+'0';
				nho=0;
			}
			i--;j--;		
		}
		while(i >= 0){
			tru = (s1[i]-'0')-nho;
			if(tru < 0){
				nho = 1;
				tru += 10;
				dif += (char)tru+'0';
			}
			else{
				dif += (char)tru+'0';
				nho = 0;
			}
			i--;		
		}
		for(int i = dif.size()-1; i >= 0; --i) cout << dif[i];
		cout << endl;
	}
}
