#include<bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
long long n,m,x[1000],w[1000],v[1000],save[1000],maxx=0,i,j;

void nhap(){
	fi>>n>>m;
	for (i=1;i<=n;i++){
		fi>>w[i]>>v[i];
	}
}
void xuat(){
	long mpw=0,mpv=0;
	for (i=1;i<=n;i++){
		if (x[i]==0){
			mpv+=v[i];
			mpw+=w[i];
		}
	}
	if ((mpw<=m) && (maxx<mpv)){
		maxx=mpv;
		for (i=1;i<=n;i++){
			save[i]=x[i];
		}
	}		
}
void ckhe(int i){
	for (j=0;j<=1;j++){
		x[i]=j;
		if (i==n) xuat();
		else ckhe(i+1);
	}
}

int main(){
	nhap();
	ckhe(1);
	fo<<maxx<<endl;
	return 0;
	fi.close();
	fo.close();
}
