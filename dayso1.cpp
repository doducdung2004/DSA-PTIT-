#include<bits/stdc++.h>
using namespace std ;
int n , a[1000] ;
void backtracking(int n){
	cout << "[" ;
	for(int i = 0 ; i < n-1 ; i++){
		cout << a[i] <<" ";
	}
	cout << a[n-1]<<"]" ;
	cout << endl ;
	for (int i = 0 ; i < n-1 ; i++){
		a[i] = a[i]+a[i+1] ;
	}
	if(n!=1) backtracking(n-1) ;
}

void TestCase(){
	
	cin >> n ;
	for (int i = 0 ; i <  n; i++){
		cin >> a[i] ;
	}
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
	   TestCase () ;
	   backtracking(n) ;
	}
}
