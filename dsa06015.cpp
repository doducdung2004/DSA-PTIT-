#include<bits/stdc++.h>
using namespace std ;
void selectionSort(int a[] , int n ){
	int i , j , dungdz ;
	for( i = 0 ; i < n-1  ; i++){
		dungdz=i ;
		for( j = i + 1 ; j  <n; j++ ){
			if(a[j]<a[dungdz]){
			dungdz =   j ;
		}
			swap(a[dungdz],a[i]) ;
		}
	}
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		int n ;
		cin >> n; 
		int a[n] ;
		for(int i = 0 ; i < n; i++){
			cin >> a[i] ;
		}
		selectionSort(a,n) ;
		for(int i =  0 ; i <n; i++){
			cout << a[i] << " " ;
		}
		cout << endl ;
	}
}
