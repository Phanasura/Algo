#include <bits/stdc++.h>
#include <fstream>
#include <cstdlib>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int n,x,a[1000],num[1000],sl[1000],spt,b[1000];
void nhap(){
	fi >> n;
	fi >> x;
	for (int i=1;i<=n;i++){
		fi >> a[i]; 
	}
}
void qsort(int a[], int l,int r){
	int i=l,j=r,key=a[(l+r)/2];
	while (i<=j){
		while (a[i]<key) i++;
		while (a[j]>key) j--;
		if (i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if (i<r) qsort(a,i,r);
	if (l<j) qsort(a,l,j);
}
void dqsort(int a[],int l,int r){
	int i=l,j=r,key=a[(l+r)/2];
	while (i<=j){
		while (a[i]>key) i++;
		while (a[j]<key) j--;
		if (i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
	}
	if (i<r) dqsort(a,i,r);
	if (l<j) dqsort(a,l,j);
}
int bsearch(int a[],int l,int r,int x){
	int mid;
	while (l<=r){
		mid = (l+r)/2;
		if (a[mid]==x) return mid;
		if (a[mid]>x)  r=mid-1;
		if (a[mid]<x) l=mid+1;
	}
}
void dpp(int a[]){
    int i=1;
	spt=0;
	while (i<=n){
		int key=a[i];
		int dem=1;
		i++;
		while ((a[i]==key)&&(i<=n)){
			dem++;
			i++;
		}
		spt++;
		num[spt]=key;
		sl[spt]=dem;
	}	
}
void sngto(int n){
	for (int i=2;i<=n;i++) b[i]=0;
	for (int i=2;i<=sqrt(n);i++){
		if (b[i]==0){
			int j=pow(i,2);
			while (j<=n){
				b[j]=1;
				j=j+i;
			}
		}
	}
}
void latmang(int a[],int l,int r){
	int i=l,j=r;
	while (i<j){
		swap(a[i],a[j]);
		i++;
		j--;
	}
}
void solve(){
	qsort(a,1,n);
	fo <<"sap xep: ";
	for (int i=1;i<=n;i++){
		fo << a[i]<< " ";
	}
	dqsort(a,1,n);
	fo << endl;
	fo <<"sap xep nguoc: ";
	for (int i=1;i<=n;i++){
		fo << a[i]<< " ";
	}
	fo << endl<< "dem phan phoi"<< endl;
	dpp(a);
	for (int i=1;i<=spt;i++) fo << num[i]<<" ";
	fo << endl;
	for (int i=1;i<=spt;i++) fo << sl[i]<<" ";
	sngto(n);
	fo << endl<< "sang nguyen to: "<<endl;
	for (int i=2;i<=n;i++) if (b[i]==0) fo << i << " ";
	latmang(a,1,n);
	fo << endl << "lat mang: "<< endl;
	for (int i=1;i<=n;i++){
		fo << a[i]<<" ";
	}
}
int main(){
	nhap();
	solve();
	return 0;
	fi.close();
	fo.close();
}
