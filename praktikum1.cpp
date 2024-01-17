#include <iostream>
using namespace std;

int main () {
	int a, t, bensin;
	float total, hasil;
	 
	
	cout << " Masukkan Nilai Odometer Di Kota Asal : "; cin >> a;
	cout << " Masukkan Nilai Odometer Di Kota Tujuan : "; cin >> t;
	cout << " Jumlah Liter Pengisian BBM Di Kota Tujuan : "; cin >> bensin;
	
	total = t-a;
	hasil = total/bensin;
	
	cout << " Komsumsi Bahan Bakar =  " << hasil << " KM per liter";
	
	return 0;
	
}
	
	
