#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
long long n;
int main()	{
	system("color a");
	int n=110;
	for(int i=1; i<=n; i++){
		for (int j=1; j<=n; j++) {
			Sleep(2);
			if (j-1!=n/2-i+1&&i+n/2!=j&&i!=j+n/2&&j-n/2!=n-i+1) cout<<"_";
			else cout<<"^";
		}
		cout<<endl;
	}
}
