#include<bits/stdc++.h>
using namespace std ;
int n , ok , a[100001] ;
void  init(){
	for(int i = 1 ; i <=n ;i++){
		a[i] = 0 ; 
	} 
} 
void sinh(){
	int i = n ;
	while(i>=1 && a[i]==1){
		a[i]= 0 ;
		i-- ; 
	} 
	if(i==0){
		ok = 0  ;
	} 
	else a[i] = 1 ; 
} 
bool check(int n , int a[]){
	int i = 1  , j = n ;
 while(i<j){
 	if(a[i]==a[j]){
 		i++ ;
 		j-- ;
	 }
	 else return  0;
 }
 return 1 ;
}
int main(){
	cin >> n ;
	ok = 1 ;
	init() ;
	
	while(ok) {
		
		  if(check(n,a)){
		  
		for (int i = 1 ; i <= n; i++){
			cout << a[i] <<" " ;
		}
		cout << endl ;
	}
	sinh() ;
	 
	}
	return 0 ;
	 
} 
