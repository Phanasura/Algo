#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,a[10000],k,t;
bool stop;
void init(){
	fi >> n;
	k=1;
	a[k]=n;
}
void res(){
	for (int i=1;i<=k;i++){
		if (i==1) fo << "(";
		fo << a[i];
		if (i<k) fo << " ";
		else fo << ") ";
	}
}
void sinh(){
	int i=k;
	while (i>0 && a[i]==1) i=i-1;
	if (i<=0) stop=true;
	else {
		a[i]-=1;
		int d= k-i+1;
		k=i;
		for (int j=i+1;j<=i+d/a[i];j++) a[j]=a[i]; //kt xem co the toi da bao nhieu phan tu  ke tu i+1 ma bang ai thi day se la cau hinh tiep theo
		
		int x = d/a[i];
		k=k+x; // k la so cac so duoc phan tich
		int y=d%a[i];
		if (y){
			a[++k] = d%a[i]; // them cai phan du tu vong for tren
		}
	}
}
int main(){
    fi >> t;
	while (t--){
		init();
		stop=false;
		while (!stop){
			res();
			sinh();
			
		}
		fo << endl;
	}	
	return 0;
	fi.close();
	fo.close();
}
/*
2
5
3
*/

