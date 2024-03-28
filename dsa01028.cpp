#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100], c[100];
set<int> s;
bool ok = true;
void Init(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		s.insert(a[i]);
	}
	int f = 1;
	for(auto it : s){
		c[f] = it;
		++f;
	}
	for(int i = 1; i <= k; i++){
		b[i] = i;
	}
}

void Next_Combination(){
	int i = k;
	while(i > 0 && b[i] == s.size() - k + i){
		--i;
	}
	if(i > 0){
		b[i]++;
		for(int j = i + 1; j <= k; j++){
			b[j] = b[j - 1] + 1;
		}
	}else{
		ok = false;
	}
}
void Result(){
	for(int i = 1; i <= k; i++){
		cout << c[b[i]] << " ";
	}

	cout << endl;
}
int main(){
	Init();
	while(ok){
		Result();
		Next_Combination();
	}
}
