#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n , m ;
		cin >> n >> m ;
		int a[n] , b[m] ;
		multiset<int> ms ; 
		for (int i = 0 ; i < n; i++){
			cin >>  a[i] ;
			ms.insert(a[i]) ; 
		} 
		for (int i = 0 ; i < m ; i++){
			cin >> b[i] ; 
			ms.insert(b[i]) ; 
		}
		for (auto x: ms ){
			cout << x << " " ; 
		} 
		cout << endl ; 
		
	} 
} 
