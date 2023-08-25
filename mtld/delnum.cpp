#include <bits/stdc++.h>
#include <fstream>
using namespace std;

ifstream fi("test.txt");
ofstream fo("kq.txt");

int main(){
	int a[100000];
	int n,i,k,x,y,z;
	fi >> n;
	a[-1]=INT_MIN;
	a[0]=INT_MIN;
	k=0;
	for (i=1;i<=n;i++){
		fi >>z;
		do {
			x=a[k-1];
			y=a[k];
			if ((x>y)&&(y<z)) k--;
			else break;
		} while (true);
		k++;
		a[k]=z;
		
	}
	fo <<k<<endl;
	for (i=1;i<=k;i++){
		fo << a[i]<<" ";
	}
	return 0;
	fi.close();
	fo.close();
}
/*in6
6 5 1 0 2 7

out
2*/
