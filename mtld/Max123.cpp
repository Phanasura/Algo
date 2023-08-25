#include <bits/stdc++.h>
#include <fstream>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");

int main(){
	long long n,x,max1=LLONG_MIN,max2=LLONG_MIN,max3=LLONG_MIN;
	fi >> n;
	for (int i=1;i<=n;i++){
		fi>> x;
		if (max1<x){
			max3=max2;
			max2=max1;
			max1=x;
		}
		else if (max2<x){
			max3=max2;
			max2=x;
		}
		else if (max3<x){ max3=x;
		}
		
	}
	fo << max1<<endl<<max2<<endl<<max3;
	return 0;
	fi.close();
	fo.close();
	
}
