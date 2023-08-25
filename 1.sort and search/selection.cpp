#include <iostream>

using namespace std;

void selectsort(int a[],int n){
	
	for (int i=0;i<n-1;i++){
		
		int min = i;
		
		for (int j=i+1;j<n;j++){
			
			if (a[j]<a[min]) min=j;
			
		}
		
		swap(a[min],a[i]);
		
	}
	
}

int main(){
	
	int n,a[n];
	
	cout << "nhap n:";
	
	cin >> n;
	
	for (int i=0;i<=n-1;i++){
		
		cout << "nhap a["<<i<<"]:";
		
		cin >> a[i];
		
	}
	
	cout << "before:";
	
	for (int i=0;i<=n-1;i++){
		
		cout << a[i] <<" ";
		
	}
	
	cout << endl;
	
	selectsort(a,n);
	
	cout << "after:";
	
	for (int i=0;i<=n-1;i++){
		
		cout << a[i] << " ";
		
	} 
	
	return 0;
	
}
