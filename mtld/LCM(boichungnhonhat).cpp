#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,a[1000000],b[1000000],t,r,so=1000000007;
void nhap(){
	fi >> n;
}
void sangnt(){
	for (int i=2;i<=n;i++){
		a[i]=1;
	}
	for (int i=2;i<=sqrt(n);i++){
		if (a[i]==1){
			int j=pow(i,2);
			while (j<=n){
				a[j]=0;
				j=j+i;
			}
		}
	}
}
void solve(){
	for (int i=2;i<=n;i++) b[i]=0;
	for (int i=2;i<=n;i++){
		if (a[i]==1){
			t=i;
			while (t*i<=n){
				t=t*i;
			}
			b[i]=t;
		}
		
	}
	r=1;
	for (int i=2;i<=n;i++){
		if (b[i]>0) r=r*(b[i]%so)%so;
	}
	fo << r;
}
int main(){
	nhap();
	sangnt();
	solve();
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
10
out:
2520
*/
