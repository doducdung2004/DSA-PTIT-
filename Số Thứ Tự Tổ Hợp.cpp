#include<bits/stdc++.h>
using namespace std ;
int n , k , ok  , a[1000001] ;
void ktao(){
	for(int i = 1 ;i<=k; i++){
		a[i]= i ; 
	} 
}
void sinh(){
	int i = k  ;
  while(i>=1&&a[i]==n-k+i){
  	 i-- ; 
  }
  if(i==0){
  	ok = 0 ; 
  }
  else {
  a[i]++ ; 
  for(int j = i+1 ; j <=k ;j++){
  	a[j]=a[j-1]+1 ; 
  }
}
} 
int main(){
	int t ;
	cin >> t ;
	while(t--){
		
		cin >> n >> k ;
		int b[k] ; 
		for(int i = 1 ;i<=k ; i++){
			cin >> b[i] ; 
		} 
		ktao() ;
		ok =1 ;
		int dem = 1; 
		while(ok){
			dem ++ ; 
			sinh() ; 
			int cnt = 0 ; 
			for(int i = 1 ;i<=k ; i++){
				if(a[i]==b[i]){
					cnt ++ ; 
				} 
			}
			if(cnt==k){
				cout << dem  ;
				break ; 
		}
		}
		 
		cout << endl ; 
	} 
} 
