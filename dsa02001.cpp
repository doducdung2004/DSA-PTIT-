#include<bits/stdc++.h>
using namespace std ;
int n , a[1000] ;
void print() {
    cout << "[";
    for (int i = 0; i < a.size(); ++i) {
        cout << a[i];
        if (i != a.size() - 1) cout << " ";
    }
    cout << "]" << endl;
}

void backtracking(int n){
	cout <<"[" ;
	for(int i = 0 ; i < n-1 ;i++){
		a[i]= a[i]+a[i+1] ;
	}
	backtracking(n-1);
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		
		cin >> n ;
		for (int i = 0 ; i < n; i++){
			cin >> a[i] ;
		}
		backtracking(n) ;
		print() ;
	}
}
