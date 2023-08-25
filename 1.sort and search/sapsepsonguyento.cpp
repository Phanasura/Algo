#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
int n,a[1001];
void readin(){
	fi >> n;
	for (int i=1;i<=n;i++) fi >> a[i];
}
bool kt(int x){
	if (x<2) return false;
	else for (int i=2;i<=sqrt(x);i++){
		if (x%i==0) return false;
	}
	return true;
}
void solve(){
	for (int i=1;i<n;i++){
		for (int j=i+1;j<=n;j++){
			if (a[i]>a[j]&& kt(a[i]) &&kt(a[j])) swap(a[i],a[j]);
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
