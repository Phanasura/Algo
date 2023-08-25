#include <bits/stdc++.h>
using namespace std;
ifstream fi("test.txt");
ofstream fo("kq.txt");
int t,f[100][100],res;
string s1,s2;
int main(){
	fi >> t;
	while (t--){
		fi >> s1>>s2;
		memset(f,0,sizeof(f));
		res=0;
		for (int i=1;i<=s1.size();i++){
			for (int j=1;j<=s2.size();j++){
				if (s1[i-1]==s2[j-1]) f[i][j]=f[i-1][j-1]+1;
				else f[i][j]=max(f[i-1][j],f[i][j-1]);
				
			}
		}
		for (int i=1;i<=s1.size();i++){
			for (int j=1;j<=s2.size();j++){
				fo << f[i][j]<<" ";
				
			}
			fo <<endl;
		}
	}
	return 0;
	fi.close();
	fo.close();
}
