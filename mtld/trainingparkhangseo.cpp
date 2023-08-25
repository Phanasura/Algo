#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");

int n,m,a[1000],b[1000],kq;

void nhap(){
	fi >> n>>m;
	for (int i=1;i<=n;i++){
		fi >> a[i];
	}
	for (int i=1;i<=m;i++){
		fi >> b[i];
	}
	
}

int train(int x){
	int s,i;
	/*for (int i=1;i<=m;i++){
		if (x>=b[i]) x=x+b[i];
		else continue;
	}*/
	/*while ((i<=m)&&(x>=b[i])){
		x=x+b[i];
		i=i+1;
	}*/
	return x;
}

void solve(){
/*	for (int i=1;i<=n;i++){
		fo << a[i]<<" ";
	}
	for (int i=1;i<=m;i++){
		fo << b[i] << " ";
	}*/
	for (int i=1;i<=n;i++){
		kq = train(a[i]);
		fo << kq << " ";
	}
}

int main(){
	nhap();
	sort(b+1,b+m+1);
	solve();
	return 0;
	fi.close();
	fo.close();
}

