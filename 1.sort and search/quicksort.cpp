#include <iostream>

using namespace std;

void quicksort(long a[], long l,long r){
	
	int i=l,j=r,key = a[(l+r)/2];
	
	while (i<=j) {
		
		while (a[i] < key) i++;
		
		while (a[j] > key) j--;
		
		if (i<=j){
			
			swap(a[i],a[j]);
			
			i++;
			
			j--;
			
		}
		
	}
	
	if (i<r) quicksort(a,i,r);
	 
	if (l<j) quicksort(a,l,j);
	
}

int main(){
	
	long n,a[n];
	
	cout << "\n nhap n: ";
	
	cin >> n;
	
	for (int i=1;i<=n;i++){
		
		cout << "nhap a["<<i<<"]:";
		
		cin >> a[i];
		
	}
	
	cout << "\n before:";
	
	for (int i=1; i<=n;i++){
		
		cout << a[i] << " ";
		
	}
	
	quicksort(a,1,n);
	
	cout << endl;
	
	cout << "\n after:";
	
	for (int i=1; i<=n ; i++){
		
		cout << a[i]<< " ";
		
	}
	
	
	
	return 0;
	
}
