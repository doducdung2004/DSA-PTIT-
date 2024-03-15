#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n , k ;
	cin >> n >> k ;
	vector<string> v ,p ; 
	string tmp ="" ;
for (int i = 0 ; i < n; i ++){
	string s ;
	cin >> s ;
	v.push_back(s) ; 
} 
int i = 0 ;

while(i<n){
	for (int j = i+1 ; j < n; j ++){
		 tmp = v[i]+ v[j];
		 p.push_back(tmp) ;
		 tmp = ""; 
	} 
}
for (auto x : p){
	cout << x << endl ; 
} 

} 
