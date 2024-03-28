#include<bits/stdc++.h>
using namespace std ;
int n , a[10000] , b[10000];
bool ok = 1 ;
void Init(){
	cin >> n;

	for(int i = 1 ;i <=n ;i++){
		a[i]= i ;
	}
	for(int i = 1 ;i<= n; i++){
		cin >> b[i] ;
	}
	sort(b+1,b+n+1) ;
}
void result(){
	for(int i = 1 ;i<= n; i++){
		cout << b[a[i]] <<" " ;
	}
	cout << endl ;
}
void next(){
	int i = n-1 ;
	while(i>0&&a[i]>a[i+1]){
		i-- ;
	}
	if(i==0){
		ok = 0 ;
	}
	else {
		int j = n ;
		while(a[i]>a[j]) -- j;
		swap(a[i],a[j]) ;
		reverse(a+i+1,a+n+1) ;
	}
}
int main(){
	Init() ;
	while(ok){
		result() ;
		next()  ;
	} 
}
