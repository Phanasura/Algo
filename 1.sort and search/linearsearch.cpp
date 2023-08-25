#include <iostream>

using namespace std;

int main(){
	
	int n , a[n], x;
	cout << "\nnhap n:";  
    cin >> n;
    for (int i=0;i<n;i++){	
    	cout << "nhap a["<<i<<"]:";	
    	cin >> a[i];
    }
	cout << "nhap x:";  
    cin >> x;	
	for (int i=0;i<n;i++){	
		if (a[i] == x) cout<<i <<endl;	
	}
	return 0;

}

