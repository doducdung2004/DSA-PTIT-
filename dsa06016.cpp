#include<bits/stdc++.h> 
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ,  m ;
		cin >> n >> m ;
		int a[n] , b[m] ; 
		for (int i = 0 ; i < n; i++){
			cin >> a[i] ; 
		} 
		for (int i = 0 ; i < m ;i++){
			cin >> b[i] ; 
		}
		long long  min = 0 , max = 100000001 ; 
		for(int i = 0 ;  i < n; i++){
			if(a[i]>=min){
				min = a[i] ; 
			} 
		}
		for (int j = 0 ; j < m ; j++){
			if(b[j]<=max){
				max = b[j] ; 
			} 
		}
		cout << min*max << endl ; 
	} 
} 
