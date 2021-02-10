#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, k;
bool test(ll x, vector <int> &d){
	int cont = 1;
	ll p = d[0];
	for(int i=1; i<n; i++){
		if(d[i] - p >= x){
			cont++;
			p = d[i];
		}
	}
	if(cont >= k) return true;
	else return false;
}

int main(){
	cin >> n >> k;
	vector <int> d(n);
	for(int i=0; i<n; i++) cin >> d[i];
	ll lo = 1, hi = (1LL<<60);
	while(lo < hi){
		ll me = lo + (hi-lo+1)/2;
		if(test(me, d)) lo = me;
		else hi = me-1;
	}
	cout << lo;
	return 0;
}
