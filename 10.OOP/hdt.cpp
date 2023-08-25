#include <iostream>

using namespace std;

class thongtin{

public: 
   
   string ten;
   
   int tuoi;
   
   void nhap(){
   	
	   cout << "nhap ten cua ban: ";
	   
	   cin >> ten;
	   
	   cout << "nhap tuoi cua ban:"; 
   	
   	   cin >> tuoi;
   	   
   }
   
   void show(){
   	    
		cout << "--------------------------------";
		cout << endl;		
		cout << "|"<<"ten cua ban la:"<<ten<<"      |";
        cout << endl;				
		cout << "|"<<"tuoi cua ban la:"<<tuoi<<"    |";
		cout << endl;				
		cout << "|                                  |";
		cout << endl;				
		cout << "|                                  |";
		cout << endl;				
		cout << "|                                  |";
  		cout << endl;		      
    	cout << "--------------------------------";
    	cout << endl;

   }
        
};

int main() {
	
	thongtin s;
	
	s.nhap();
	
	s.show();
	
	return 0;
	
}
