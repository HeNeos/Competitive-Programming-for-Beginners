#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin >> n;
	for(int i=n+1; i<100000000; i++){
		string s = to_string(i);
		vector <int> cont(10, 0);
		bool found = true;
		for(int j=0; j<s.size(); j++){
			if(s[j] == '2' or s[j] == '0'){found = false; break;}
			int d = (int)(s[j] - '0');
			cont[d]++;
			if(cont[d] >= 2) {found = false; break;}
		}
		if(found){cout << i; return 0;}
	}
	cout << -1;
	return 0;
}
