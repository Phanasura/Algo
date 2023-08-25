#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int t,x[10000],p,maxp=5000;
void nhap(){
	fi >> t;
}
void taomang(int n){
	int a,b,c;
	for (int a=1;a<=n/2;a++){
		for (int b=a+1;b<=n/2;b++){
			c=(int) sqrt(a*a+b*b);
			if (c*c==a*a+b*b){
				if (a+b+c<=5000){
					x[a+b+c]++;
				}
			}
		}
	}
}
int main(){
	nhap();
	taomang(maxp);
	for (int i=1;i<=t;i++){
		fi >> p;
		fo << x[p]<<endl;
	}
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
2
12
60
out:
1
2
*/
