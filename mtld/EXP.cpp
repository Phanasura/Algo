#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int s,n,a[1000],amin,amax;
void nhap(){
	fi >> n;
	s=0;
	for (int i=1;i<=n;i++){
		fi >> a[i];
		if (i%2!=0) s=s+a[i]; //le
		else s=s-a[i];  //chan
	}
}
void solve(){
	amax=0;
	amin = 1000000000;
	for (int i=1;i<=n;i++){
		if ((i%2==0) and (amax<a[i])) amax=a[i];
		if ((i%2!=0) and (amin>a[i])) amin =a[i];
	}
	if (amax>amin) s=s+2*(amax-amin);
	fo << s;
}
int main(){
	nhap();
	solve();
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
6
2 5 4 7 9 1
out :12

giai thich: phan tu thu i trong mang neu la chan thi -a[i] con neu la le thi +a[i]. vd:+2-5+4-7+9-1
hay hoan doi vi tri 2 phan tu, hoan doi lam sao de dat max va do lan hoan doi it nhat! 
*/

