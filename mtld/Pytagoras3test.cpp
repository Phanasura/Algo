#include <bits/stdc++.h>
#include <fstream>

using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
int  n,a[1000],b[1000],c[1000],num[1000],sl[1000],spt,res;

void nhap(){
	fi >> n;
	for (int i=1;i<=n;i++){
		fi >> a[i];
	}
	for (int i=1;i<=n;i++){
		fi >> b[i];
	}
	for (int i=1;i<=n;i++){
		fi >>c[i];
	}
}
void qsort(int l,int r,int a[]){
	int i=l,j=r,key = a[(l+r)/2];
	
	while (i<=j){
		while (a[i]<key) i++;
		while (a[j]>key) j--;
		if (i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		
	}
	if (i<r) qsort(i,r,a);
	if (l<j) qsort(l,j,a);
}
void demphanphoi(int a[]){
	int dem,i=1,key;
	spt=0;
	do{
		key=a[1];
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
}
int bsearch(int num[],int l,int r,int x){
	int mid;
	while (l<=r){
		mid = (l+r)/2;
		
		if (a[mid]==x) return sl[mid];
		else 
		if (x>a[mid]) l=mid+1;
		else r=mid-1;
		  
	}
}
void pytago(int a[],int b[],int num[]){
	int i,j;
	long long s,tam;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			s=sqrt(pow(a[i],2)+pow(b[j],2));
			tam=round(s);
			if (s==tam){
				res = res + bsearch(num,1,n,tam);
			}
		}
	}
}
	
int main(){
	nhap();
	qsort(1,n,a);
	
	qsort(1,n,b);
	
	qsort(1,n,c);
	res=0;
	demphanphoi(a);
	pytago(b,c,num);
	
	demphanphoi(b);
	pytago(a,c,num);
	
	demphanphoi(c);
	pytago(a,b,num);
	
    fo << res;
	
	return 0;
	fi.close();
	fo.close();
}
/*
inp:
5
3 4 2 2 1 
4 3 1 2 1 
5 2 5 7 5 
out:
6
*/

