#include <bits/stdc++.h>

using namespace std;
ifstream fi("test.txt");
int main(){
	int a[] = {5,7,3,2};
	for (int i=0 ; i < (1 << 4) ; i++){
		cout << "{";
		for (int j=0;j<4;j++){
			if (i & ( 1<< j)){
				cout << a[j] << " ";
			}
		}
		cout << "}"<< endl;
	}
	return 0;
	fi.close();
}
