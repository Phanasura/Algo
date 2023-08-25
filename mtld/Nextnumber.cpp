#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.inp.txt");
ofstream fo("kq.out.txt");
char a[1000];
int n;
void nhap(){
	int i=0;
	char x;
	while (! fi.eof()){
		fi >> x;
		if ((x<='9')&&(x>='0')) {
			i++;
			a[i]=x;
		}
	}
	n=i;
}
bool kt(){
    int i=n-2;
    while (a[i]>=a[i+1]) i--;
    if (i==0) return false;
    int j=n-1;
    while (a[i]>=a[j]) j--;
    swap(a[i],a[j]);
    i++;
    j=n-1;
    while (i<j){
    	swap(a[i],a[j]);
    	i++;
    	j--;
	}
    return true;
}
void xuat(){
	for (int i=1;i<=n-1;i++){
		fo << a[i];
	}
}
int main(){
	nhap();
	if (kt()) xuat();
	else fo << "0";
	
	return 0;
	fi.close();
	fo.close();
}
/*
 inp:
 538721
 out:
 571238
*/

