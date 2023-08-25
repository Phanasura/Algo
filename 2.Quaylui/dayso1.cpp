#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int t,n,cot,a[100][100];
void writeout(){
	cot = n;
	for (int i=1;i<=n;i++){
		fo << "[ ";
		for (int j=1;j<=cot;j++){
			fo << a[i][j]<<" ";
		}
		fo << "]"<<endl;
		cot--;
	}
}

void solve(){
	fi >> n;
	for (int i=1;i<=n;i++){
		fi >> a[1][i];
	}
	cot = n-1;
	for (int i=2;i<=n;i++){
		for (int j=1;j<=cot;j++){
			a[i][j]=a[i-1][j]+a[i-1][j+1];
		}
		cot--;
	}
	writeout();
}

void readin(){
	fi>> t;
	while (t--){
		solve();
	}
}
int main(){
	readin();
	return 0;
	fi.close();
	fo.close();
}
