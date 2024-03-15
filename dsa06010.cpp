#include<bits/stdc++.h>
using namespace std ;
void display(int n){
	while(n>0){
		int k = n%10 ;
		 
	} 
} 
int main(){
	int t ;
	cin >> t ;
	while(t--){
		set<int> s ; 
		int n ; 
		cin >> n ;
		int a[n] ;
		for(int i = 0 ; i < n; i++){
			cin >>a[i] ; 
				while(a[i]>0){
				int k = a[i]%10 ;
				s.insert(k) ;
			a[i]/=10 ;
		}
		}
		
		
		for (auto x: s){
			cout << x << " " ; 
		} 
		cout << endl ; 
		 
	} 
} 
