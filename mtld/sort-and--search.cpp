#include <bits/stdc++.h>
#include <fstream>

using namespace std;

ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
long long n,a[1000],x;
void nhap(){
	fi >> n;
	for (int i=1;i<=n;i++){
		fi >> a[i];
	}
	fi >> x;
}
void quicksort(long long a[],long long l, long  long r){
	long long i=l,j=r;
	long long key=a[(l+r)/2];
	while (i<=j){
		
		while (a[i]<key) i++;
		while (a[j]>key) j--;
		if (i<=j){
			swap(a[i],a[j]);
			i++;
			j--;
		}
		
	}
	if (i<r) quicksort(a,i,r);
	if (l<j) quicksort(a,l,j);
}
int binarysearch(long long a[],long long l, long long r, long long x){
	long long mid;
	while (l<=r){
		mid = (l+r)/2;
		if (x==mid)  return mid;
		if (x>mid)   l=mid+1;
		else r=mid-1;
	}
}
void xuat(long long a[]){
	for (int i=1;i<=n;i++){
		fo << a[i] << " ";
	}
	fo << "so can tim o vi tri thu:" <<x;
}
int main(){
	nhap();
	quicksort(a,0,n);
	x=binarysearch(a,0,n,x);
	xuat(a);
	fi.close();
	fo.close();
	
	return 0;
}
/*
int linearsearch(long long a[],long long n, long long x){
	
	for (int i=0;i<n;i++){
		
		if (a[i]==x) return i;
		
	}
	
}
int selectionsort(long long a[],long long l, long lon r,long long x){
    for (int i=0;i<n-1;i++){
	    min =i;
	    for (int j=i+1;j<n;j++){
	        if (a[j]<a[min]) min=j;
		}
		if (min != i)  swap(a[i],a[min]);
	}
}*/
