#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,k,a[100];
void init(){
	for (int i=1;i<=k;i++)  a[i]=i;
}
void res(){
	for (int i=1;i<=k;i++){
		cout << a[i];
	}
	cout << " ";
}
void bt(int i){ 
    for (int j=a[i-1]+1;j<=n-k+i;j++){
    	a[i]=j;
    	if (i==k) {
	        res();
        }
    	else bt(i+1);
	}
}
int main(){
    int t;
	cin >> t;
    while (t--){
    	cin >> n>>k;
    	init();
    	bt(1);
    	cout << endl;
	}
    fi.close();
    fo.close();
    return 0;
}
/* 
2
4 3
5 3
*/
