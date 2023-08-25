#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int n,cot,a[100][100],t;

void solve(){
	fi >> n;
	for (int i=1;i<=n;i++){
		fi >> a[1][i];
	}
	cot =n-1;
	vector< vector<int> > res;
	for (int i=2;i<=n;i++){
		vector<int>x;
		for (int j=1;j<=cot;j++){
			a[i][j]=a[i-1][j]+a[i-1][j+1];
			x.push_back(a[i][j]);
		}
		res.push_back(x);
		cot--;
	}
	/*cot =  n;
	for (int i=res.size()-1;i<=n;i++){
		for (int j=1;j<=cot;j++){
			fo << a[i][j]<< " ";
		}
		fo << endl;
		cot--;
	}*/
	for (int i=res.size()-1;i>=0;i--){
		for (int j=0;j<res[i].size();j++){
			if (j==0) fo<< "[";
			fo << res[i][j]<<" ";
			if (j==res[i].size()-1) fo << "] ";
			if (j<res[i].size()-1) fo <<" ";
		}
	}
	fo << endl;
}

void readin(){
	fi >>t;
	while (t--){
		solve();
	}
}
int main(){
	readin();
	return 0;
	fi.close();
	fo.close();
}
