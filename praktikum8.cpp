#include <iostream>
using namespace std;

int main () {
	int ukuran;
	
	cout << "Masukkan Ukuran : "; cin >> ukuran;
	
	for ( int i = 1; i<=ukuran; i++) {
		cout << "\n";
		
		for ( int j = 1; j<=i; j++ ) { 
	        if ( j == 1 || i == ukuran || i == j ){
		       cout << "*";
		    }else {
		    cout << " ";
	}
		
	 
  } 
		
	}	
	
}
	     
	
