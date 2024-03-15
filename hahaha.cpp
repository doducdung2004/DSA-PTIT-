#include<bits/stdc++.h>
using namespace std ;
int  n;
string s ;
vector<string> v ;
void solve(){
	if(s[0]=='H' && s[n-1]=='A' && s.find("HH")== -1){
		v.push_back(s) ;
	}
}
void Try(int i){
	for(int j = 0 ; j <=1 ; j++){
		if(j==0)
			s[i]='H' ;
		
		else s[i] = 'A' ;
		if(i==n-1)
			solve()  ;
		
		else Try(i+1) ;
	}
}
void TestCase(){
	cin >> n ;
	s.resize(n) ;
	v.clear() ;
	Try(0);
    sort(v.begin(), v.end());
    for (string i : v ) cout << i << endl;
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t = 1; cin >> t;
	while(t--){
		TestCase() ;
		cout << endl ;
	}
}
