#include<bits/stdc++.h>
using namespace std; 
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n , k ;
		cin >> n >> k ;
		int a[n] , b[k] ;
		set<int> ms ;
		set<int> s ;
		for(int i = 0 ; i < n ; i++){
		   cin >>a[i] ;
		   ms.insert(a[i]) ;
		}
		for(int i = 0  ; i < k ;i++){
			cin >> b[i] ;
			ms.insert(b[i]) ;
		}
		for(auto x : ms){
			cout << x << " " ;
		}
		cout << endl ;
	  for(int i = 0 ; i < n ; i++){
	  	 for(int  j = 0 ; j < k ; j++){
	  	 	if(b[j]==a[i]){
	  	 		s.insert(b[j]) ;
	  	 	}
	  	 }
	  }
	  for ( auto x : s){
	  	cout << x << " " ;
	  }
	  cout << endl ;
	}
}
