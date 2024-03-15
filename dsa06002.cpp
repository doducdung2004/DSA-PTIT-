#include<bits/stdc++.h>
using namespace std ;
int  n , k ;
vector<pair<int,int>> a ;
bool check( pair<int,int> c , pair<int,int> b){
	if(abs(k-c.first)==abs(k-b.first)){
		return c.second < b.second ;
	}
	return abs(k-c.first) < abs(k-b.first) ;
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		cin >> n >> k ;
		a.resize(n) ;
		for(int i = 0 ; i < n; i++){
			cin >> a[i].first ;
			a[i].second = i ;
		}
		sort(a.begin() , a.end() , check) ;
		for(auto i:a){
			cout << i.first <<" " ;
		}
		cout << endl ;
	}
}
