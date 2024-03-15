#include<bits/stdc++.h>
using namespace std ;
int n , k ;
vector<int> a; 
void in(){
	int cou = 0;
    for (int i : a) {
        if (i == 1) cou++;
    }
    if (cou == k) {
        for (int i : a) cout << i;
        cout << endl;
    }
}
void Try(int i) {
	for (int j = 0 ; j <=1 ; j++){
		a[i] = j ;
		if(i== n-1) in() ;
		else Try(i+1) ;
	}
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		cin >> n >> k ;
		
		a.resize(n) ;
		Try(0) ;
		cout << endl ;
	}
}
