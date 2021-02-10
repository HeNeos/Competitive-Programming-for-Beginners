#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, m; cin >> n >> m;
	int v[n]; map <int,int> k;
	for(int i=0; i<n; i++){
		cin >> v[i]; k[v[i]]++;
	}
	
	while(m--){
		int a; cin >> a;
		if(k[a] > 0) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
