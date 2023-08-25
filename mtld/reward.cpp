#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int num,spt,a[1000],s=0,dem=1,x,y,t,n,bpn;
char ch,c[1000];
int bsearch(int a[],int l,int r,int x){
	int mid;
	if (l>r) return 0;
	mid = (l+r)/2;
	if (a[mid]==x) return 1; 
	else if (a[mid]<x) return bsearch(a,mid+1,r,x);
	else bsearch(a,l,mid-1,x);
}
int value(int x,int y){
	int tam,addnum,ret;
	if (((x+y)%2)!=0) {
		addnum=x;
	} else addnum=y;
	if ((x+y)<=n){
		tam=x+y;
		ret=((tam-2)*(tam-1) / 2)+addnum;
	}
	else {
		tam = (n-x)+(n-y);
		ret=bpn-(tam*(tam+1)/2)-n+addnum;
	}
	return ret;
}
void solve(){
	bpn=n*n;
	num= value(x,y);
	spt=1;
	a[spt]=num;
	s=num;
	while (! fi.eof()){
	    fi >> ch;
	    c[dem]=ch;
		dem=dem+1;
	}
	for (int i=1;i<dem-1;i++) {
		if ((c[i]=='W')&&(y>1))	y=y-1;
		if ((c[i]=='E')&&(y<n)) y=y+1;
		if ((c[i]=='N')&&(x>1)) x=x-1;
		if ((c[i]=='S')&&(x<n)) x=x+1;
		num=value(x,y);
		sort(a+1,a+spt+1);
		t=bsearch(a,1,spt,num);
		if (t==0){
			spt=spt+1;
			a[spt]=num;
			s=s+num;
		}
	}
	fo << s;
}
int main(){
	fi >> n>>x>>y;
	solve();
	return 0;
	fi.close();
	fo.close();
}
