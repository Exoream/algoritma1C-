#include <iostream>
using namespace std;

int main () {
	int p;
	int a, b, c;
	int luasp, kelp;
	int s;
	int luaspp,kelpp;
	int panjang, lebar; 
	float luasl, kell;
	int r; 
	
	
	cout << "Hitung Luas dan Keliling Bangun Datar" << endl;
	cout << "=====================================" << endl;
	
	cout << "1.Persegi" << "\n2.Persegi Panjang" << "\n3.Lingkaran" << endl;
	cout << "Masukkan Pilihan [1..3] : "; cin >> p;
	system ("cls");
	
	switch (p) {
	    case 1 :
	    cout << "Bangun Datar Persegi\n" << endl;
	    cout << "Masukkan Ukuran Sisi : "; cin >> s;
	    
	    cout << "1. Hitung Luas " << endl;
	    cout << "2. Hitung Keliling " << endl;
	    cout << "3. Hitung Luas dan Keliling " << endl;
	    cout << "Masukkan Pilihan [1..3] : "; cin >> a;
	    break;
	    
	    case 2 :
	    cout << "Bangun Datar Persegi Panjang\n" << endl;
	    cout << "Masukkan Ukuran Panjang : "; cin >> panjang;
	    cout << "Masukkan Ukuran Lebar : "; cin >> lebar;
	    
	    cout << "\n1. Hitung Luas " << endl;
	    cout << "2. Hitung Keliling " << endl;
	    cout << "3. Hitung Luas dan Keliling " << endl;
	    cout << "Masukkan Pilihan [1..3] : "; cin >> b;
	    break;
	    
	    case 3 :
	    cout <<"Bangun Datar Lingkaran\n" << endl;
	    cout <<"Masukkan Ukuran Jari-Jari : "; cin >> r;
	    
	    cout << "1. Hitung Luas " << endl;
	    cout << "2. Hitung Keliling " << endl;
	    cout << "3. Hitung Luas dan Keliling " << endl;
	    cout << "Masukkan Pilihan [1..3] : "; cin >> c;
	    break;
	    
}   switch (a) {
       case 1 :
       luasp = s * s;
       cout << "Luas = " << luasp;
       break;
       
       case 2 :
       kelp = 4*s;
       cout << "Keliling = " << kelp;
       break;
       
       case 3 :
       luasp = s*s;
       kelp = 4*s;
       
       cout << "Luas = " << luasp << endl;
       cout << "Keliling = " << kelp << endl;
       break;
       
}   switch (b) {
       case 1 :
       luaspp = panjang * lebar;
       cout << "Luas = " << luaspp;
       break;
       
       case 2 :
       kelpp = (2*panjang) + (2*lebar);
       cout << "Keliling = " << kelpp;
       break;
       
       case 3 :
       luaspp = panjang * lebar;
       kelpp = (2*panjang) + (2*lebar);
       cout << "Luas = " << luaspp << endl;
       cout << "Keliling = " << kelpp << endl;
       break;
       
}
   switch (c) {
      case 1 :
      luasl = 3.14 * r * r;
      cout << "Luas = " << luasl;
      break;
      
      case 2 :
      kell = 2 * 3.14 * r;
      cout << "Keliling = " << kell;
      break;
           
	  case 3 :
	  luasl = 3.14 * r * r;
	  kell = 2 * 3.14 * r; 
	  cout << "Luas = " << luasl << endl;
	  cout << "Keliling = " << kell << endl;
	  break;
}	 	  	    
	    
	return 0;
} 
