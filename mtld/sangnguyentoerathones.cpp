#include <bits/stdc++.h>
#include <fstream>

using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,a[1000],j;
void nhap(){
	fi >> n;
}
void solve(){
	for (int i=2;i<=n;i++) a[i]=1;
	for (int i=2;i<=sqrt(n);i++){
		if (a[i]==1){
			j=pow(i,2);
			while (j<=n){
				a[j]=0;
				j=j+i;
			}
		}
	}
	for (int i=2;i<=n;i++){
		if (a[i]==1) fo << i << " ";
	}
}

int main(){
	nhap();
	solve();
	return 0;
	fi.close();
	fo.close();
}
