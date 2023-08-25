#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
int n,a[1001];
void readin(){
	fi >> n;
	for (int i=1;i<=n;i++) fi >> a[i];
}
void solve(){
	for (int i=1;i<n;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]>a[j]) swap(a[i],a[j]);
		}
	}
	for (int i=1;i<=n;i++){
		cout << a[i] << " ";
	}
}
int main(){
	readin();
	solve();
	return 0;
	fi.close();
}
