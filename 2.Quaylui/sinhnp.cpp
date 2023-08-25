#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,np[100];
bool stop;
void nhap(){
	fi >> n;
}
void initnp(){
	for (int i=1;i<=n;i++){
		np[i]=0;
	}
}
void xuat(){
	for (int t=1;t<=n;t++){
		fo << np[t];
	}
	fo << " ";
}
void nhiphan(){
	int i=n;
	while (i>0 && np[i]==1) i=i-1;
	if (i<=0) stop=true;
	else {
		np[i]=1;
		for (int j=i+1;j<=n;j++) np[j]=0;
	}
}
void  solve(){
	stop=false;
	initnp();
	xuat();
	while (!stop){
		nhiphan();
		xuat();
	}
}
int main(){
	nhap();
    solve();
	return 0;
	fi.close();
	fo.close();
}
