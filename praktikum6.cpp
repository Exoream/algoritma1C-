#include <iostream>
using namespace std;

int main () {
	int a, b , c;
	int jpulpen = 5000;
	int jpensil = 3000;
	int jbuku = 15000;
	int total;
	float j, p, gt;
	const float diskon = 0.15;
	const float pajak = 0.1;
	
	cout << "Masukkan Jumlah Pembelian : \n";
	cout << "Pulpen : "; cin >> a;
	cout << "Pensil : "; cin >> b;
	cout << "Buku   : "; cin >> c;
	
	jpulpen = a * jpulpen;
	jpensil = b * jpensil;
	jbuku   = c * jbuku;
	
	cout << "\nDetail Pembelian\n";
	
	cout << a << " Pulpen : " << "Rp" << jpulpen << endl;
	cout << b << " Pensil : " << "Rp" << jpensil << endl;
	cout << c << " Buku   : " << "Rp" << jbuku   << endl;
	
	cout << "================\n";
	total = jpulpen + jpensil + jbuku;
	
	cout << "Total = " << "Rp" << total;
	cout << "\n================";
	
	switch (c) {
	  case 1 ... 1000 :
	  j = total * diskon;
	  p = (total - j )*pajak;
	  
	  cout << "\nDiskon = " << "Rp" << j << endl;
      cout << "Pajak = " << "Rp" << p << endl;  
	  break;
	  
	  case 0 :
	  j = 0;
	  p = (total - j )*pajak;
	  
	  cout << "\nDiskon = " << "Rp 0" << endl;	
      cout << "Pajak = " << "Rp" << p << endl;
	  break;
	   
}
     gt = total - j + p;
     cout << "================" << endl;
     cout << "Grand Total = " << "Rp" << gt << endl; 
       	  
  return 0;	
  	
}

	
	
