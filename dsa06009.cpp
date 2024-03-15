#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n , m ;
		cin >> n >> m ;
		int a[n] ;
		for (int i = 0 ; i < n; i++){
			cin >> a[i] ; 
		} 

	 	int i = 0 , dem = 0    ;
		 while(i<n-1){
		 	for (int j = i+1 ; j < n; j++){
		 		if(a[i]+a[j]==m){
		 			dem ++ ; 
				 } 
			 }
			 i++ ; 
		 }
		 cout << dem  << endl ; 
	} 
} 
