#include <bits/stdc++.h>

using namespace std;
int n,l,r,res,q;
vector <int> a;
void poscenter(int n){
	int t=0;
	int mu = 1;
	while (n/2 >0){
		t++;
		if (t==1){
			a.push_back(2);
			mu=2;
		}
		else {
			mu*=2;
			a.push_back(mu);
		}
		n/=2;
	}
}

int val(int k,int n, int pos){
	if (k%2 ==1) return 1;
	if (k<a[pos]) val(k,n/2,pos-1);
	else if (k==a[pos]) return n%2;
	else if (k>a[pos]) val(2*a[pos]-k,n/2,pos-1);
}

int main(){
	cin >> q;
	while (q--){
		a.clear(); res=0;
		cin >> n >> l >> r;
		poscenter(n);
		for (int i=l;i<=r;i++){
			res +=  val(i,n,a.size()-1);
		}
		cout << res << endl;
	}
	return 0;
}
