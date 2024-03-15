#include<bits/stdc++.h>
using namespace std ;
bool nto(int n){
	if(n<2) return 0 ;
	else 
	for (int i = 2  ; i <= sqrt(n) ; i++){
		if(n%i==0){
			return 0 ; 
		} 
	}
	return 1 ; 
} 
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n;
		int i = 2 ;  
		while(i<=n){
			if(nto(n-i)&&nto(i)) {
				cout << i << " " << n-i  ;
				break ; 
			} 
			else  i++ ;
			if(i==n){
				cout <<"-1" ; 
				break ; 
			} 
		}
		cout << endl ; 
	 
	} 
}
