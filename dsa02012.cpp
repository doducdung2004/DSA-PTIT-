#include<bits/stdc++.h>
using namespace std ;
int n , m ,  ans  ;
int a[1000][1000] ;
bool b[1000][1000]  ; 
 

void Try(int i, int j) {
    if (i == n && j == m) {
        ans++;
        return;
    }
    if (i + 1 <= n && !b[i + 1][j])
        Try(i + 1, j);
    if (j + 1 <= m && !b[i][j + 1])
        Try(i, j + 1);
}
void ktao(){
	ans = 0 ; 
	cin >> n >> m ;
	   memset(b , false, sizeof(b));
	for(int i = 0 ; i< n; i++){
		for (int j = 0 ; j< m; j++){
			cin >> a[i][j] ; 
		} 
	}
	Try(1,1) ;
	cout << ans  << endl ; 
}
int main(){
	int t ;
	cin >> t ;
	while(t--){
		ktao()  ;
	} 
	 
} 
