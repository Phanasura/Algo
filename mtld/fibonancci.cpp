#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
//Cach 1: 
/*long long fibo(long long n){
	if ((n==1)||(n==2)) return 1;
	else {
		return fibo(n-1)+fibo(n-2);
	}
}*/
//Cach 2: =>cach 2 tot hon,toi uu hon!  fibo(100) 0.03505  Vay cach 2 la toi uu nhat voi fibo1000 cx dc
long long fibo(long long n){
	long long z,x=1,y=1,tam;
	for (int i=3;i<=n;i++){
		z=x+y;
		tam = y;
		x=tam;
		y=z;
	}
	return z;
}
//cach 3; fibo(100)  0.03812s cach toi uu nhi
/*long long fibo(long long n){
	long long f2=0,f1=1,fi;
	if (n<=1) return n;
	else {
		for (int i=2;i<=n;i++){
			fi=f1+f2;
			f2=f1;
			f1=fi;
		}
		return fi;
	}
}*/
int main(){
	long long n,kq;
	fi >> n;
	kq=fibo(n);
	fo <<kq;
	return 0;
	fi.close();
	fo.close();
}
/*inp: 8
out:21
inp:50 //cach 1 tinh khong duoc so lon nhu 50
out:12586269025  */
