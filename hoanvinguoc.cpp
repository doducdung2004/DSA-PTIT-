#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t;
	cin >> t; 
	while(t--){
		int n , a[100] ;
		cin >> n ;
			for(int i = n ; i >= 1 ; i--){
				a[i]= i ;
			}
			stack <string> st ;
		while(1){
			string s ="" ;
			for(int i = 1; i<= n ; i++){
				s += to_string(a[i]) ;
			}
			st.push(s) ;
			int ok = 0 ;
			for(int i = n-1; i >= 1 ; i --){
				if(a[i]<a[i+1]){
					ok =1 ;
					sort(a + i + 1, a + n + 1);
					for (int j = i+1 ; j <= n ; j++){
						if(a[j]>a[i]){
							swap(a[i],a[j]) ;
							break ;
						}
					}
					break ;
				}
			}
			if(ok==0) break ;
		}
		 while (st.size())
        {
            cout << st.top() << " ";
            st.pop();
        }
			
			cout << endl ;
		
	}
}
