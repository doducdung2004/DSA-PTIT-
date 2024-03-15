#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n ;
		int a[n] ;
		for(int i = 0 ; i < n; i++){
			cin >> a[i] ;
		}
		int i = 0 , dem = 0  ;
		while(i<n-1){
		    int j = i+1 ;
		    if(a[i]>*min_element(a+j,a+n)){
			swap(a[i] ,*min_element(a+j,a+n)) ;
				dem ++ ;
			}
				i++ ;
		}
		cout << dem << endl ;
	}
}

