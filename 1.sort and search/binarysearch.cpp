#include <iostream>

using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(){
	
	int n,a[n],t,x;
	
	cout << "\nnhap n:";
	
	cin >> n;
	
	for (int i=0;i<n;i++){
		
		cout << "nhap a["<< i << "]:";
		
		cin >> a[i];
		
	}
	
	cout << "\nnhap x:";
	
	cin >> x;
	
	t = binarySearch(a,n,0,n-1);
	
	if (t!=-1){
		
		cout << t ;
		
	}
	else 
	  cout << "khong co!";
	return 0;
	
}
