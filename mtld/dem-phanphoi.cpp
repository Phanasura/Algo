#include <bits/stdc++.h>
#include <fstream>

using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,spt,key,dem;
static long long a[100000],sl[10000],num[10000];
void nhap(){
	
	fi >> n;
	for (int i=1;i<=n;i++){
		fi >> a[i];
	}
	
}
void xuat(){
	for (int i=1;i<=spt;i++){
		fo << num[i]<<" ";
	}
	fo<<endl;
	for (int i=1;i<=spt;i++){
		fo << sl[i]<< " ";
	}
}
void demphanphoi(){
	spt=0;
	int i=1;
	do{
	   key=a[i];
	   dem=1;
	   i++;
	   while ((a[i]==key) and (i<=n)){
	   	dem++;
	   	i++;
	   }
	   spt++;
	   num[spt]=key;
	   sl[spt]=dem;
	}while (i<=n);
	xuat();
}
int main(){
	nhap();
	demphanphoi();
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
10
3 4 4 5 5 5 7 7 8 1000
out:
3 4 5 7 8 1000
1 2 3 2 1 1
*/
