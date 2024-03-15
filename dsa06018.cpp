#include<bits/stdc++.h>
using namespace std;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n ;
		int a[n] ;
		multiset<int> s ;
		for (int i = 0;i < n; i++){
			cin >> a[i] ;
			s.insert(a[i]) ; 
		}
        
		sort(a,a+n) ; 
		int dem = 0 ;
	
		for (int  i= a[0] ; i <= a[n-1] ;i++){
		  
			if(s.count(i)==0){
				dem ++ ; 
			} 
		} 
		 cout << dem << endl ; 
	} 
} 
