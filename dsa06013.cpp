#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n , k ;
		cin >> n >> k ;
		int a[n] ; 
		map<int,int> ms  ;
		for (int i =0 ;i < n; i ++){
			cin >> a[i] ; 
			ms[a[i]]++ ; 
		}
		for (auto x:ms){
	
			if(x.first==k){
				cout << x.second  ; 
				break  ; 
			}
		}
		if(ms.count(k)==0){
			cout << "-1"  ; 
		} 
	cout << endl ;	 
		 
	} 
} 
