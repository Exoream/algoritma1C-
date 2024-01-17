#include <iostream>
using namespace std;

int main () {
	int x, y, z ;
	int tpul, tpen, tbuk, total;
	float d, p, gd;
	const float diskon = 0.15;
	const float pajak = 0.1;
	tpul = 5000;
	tpen = 3000;
	tbuk = 15000;
	
	cout << "Masukkan Jumlah Pembelian: \n";
	cout << "Pulpen      : "; cin >> x;
	cout << "Pensil      : "; cin >> y;
	cout << "Buku        : "; cin >> z;
	
	tpul = x * tpul;
	tpen = y * tpen;
	tbuk = z * tbuk;
	
	cout << "======================";
	cout << "\nDetail Pembelian : \n"; 
	
	cout << x << " Pulpen    : " << " Rp " << tpul << endl;
	cout << y << " Pensil    : " << " Rp " << tpen << endl; 
	cout << z << " Buku      : " << " Rp " << tbuk << endl;
	
	cout << "======================\n";
	total = tpul+tpen+tbuk;
	
	cout << "Total       : " << " Rp " << total;
	cout << "\n======================";
	
	d = total * diskon;
	p = (total - d )*pajak;
	
	cout << "\nDiskon      : " << " Rp " << d;
	cout << "\nPajak       : " << " Rp " << p;
	cout << "\n======================";
	
	gd = total - d + p ;
	
	cout << "\nGrand Total : " << " Rp " << gd;
	
	
	return 0;
	
}
