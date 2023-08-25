#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,m,r,a[10000],vt[10000],dem,e,b[10000];
void nhap(){
	fi >> m >> n >> r;
	for (int i=1;i<=n;i++){
		fi >> a[i];
		vt[i]=i;
	} 
}
void qsort(int a[],int l,int r){
	int i=l,j=r,key=a[(l+r)/2];
	while (i<=j){
		while (a[i]<key) i++;
		while (a[j]>key) j--;
		if (i<=j){
			swap(a[i],a[j]);
			swap(vt[i],vt[j]);
			i++;
			j--;
		}
	}
	if (i<r) qsort(a,i,r);
	if (l<j) qsort(a,l,j);
}
void solve(){
	for (int i=1;i<=n;i++) b[i]=false;
	dem=0;
	e=0;
	int i=0;
	while ((i<=n)&&(e<=m)){
		int j=i;
		while ((j<n)&&(a[j+1]-r<=e)){
			j++;
		}
		b[j]=true;
		dem++;
		e=a[j]+r+1;
		i=j+1;
	}
}
void xuat(){
	fo << dem;
	fo << endl;
	for (int i=1;i<=n;i++){
		if (b[i]) fo << vt[i]<<" ";
	}
}
int main(){
	nhap();
	qsort(a,1,n);
	solve();
	xuat();
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
12 8 2
3 1 0 5 9 6 10 11
out:
3 
2 6 8
*/
