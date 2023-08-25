#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
int res=0,k,n,a[1001][1001],x[1002];
vector<int> v;
bool ok[1001];
void readin(){
	fi >> n >> k;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n;j++){
			fi >> a[i][j];
		}
	}
}
void bt(int i){
	for (int j=1;j<=n;j++){
		if (!ok[j])
		{
			x[i]=j;
			ok[j]=true;
			if (i==n){
				for (int l=1;l<=n;l++){
					res+=a[l][x[l]];
				}
				if (res == k){
				    for (int l=1;l<=n;l++)	v.push_back(x[l]);
				}
			}
			else bt(i+1);
			ok[j]=false;
		}
	}
}
int main(){
	readin();
	bt(1);
	cout << v.size()/n;
	for (int i=0;i<v.size();i++){
		if (i%n==0) cout << endl;
		cout << v[i]<< " ";
	}
	return 0;
	fi.close();
}
