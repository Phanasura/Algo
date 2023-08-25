#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");

int a[1000],k,n,t;

void xuat(){
    int dem=0;
	for (int i=1;i<=n;i++)	{
		if (a[i]==1) dem+=1;
	}
	if (dem==k){
		for (int i=1;i<=n;i++){
			fo << a[i];
		}
		fo << endl;
	}
}

void bt(int i){
	for (int j=0;j<=1;j++){
		a[i]=j;
		if (i==n)
			{
				xuat();
			
			}
		else bt(i+1);
	}
}

int main(){
	fi >> t;
	while (t--){
		fi >>n >> k;
		bt(1);
		
	}
	
	return 0;
	fi.close();
	fo.close();
}
/*
2
4 2
3 2
*/

