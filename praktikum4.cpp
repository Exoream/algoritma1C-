#include <iostream>
using namespace std;

int main (){
	int lahir;
	int umur;
	
	cout <<"Masukkan Tahun Lahir : "; cin >> lahir;
	cout <<"Hasil : " << endl;
	
	umur = 2021 - lahir;
	
	cout <<"Umur Anda : " << umur;
	
	if (umur > 12 && umur < 18){
		cout << "\nVaksin Yang Cocok : \n" << "-Pfizer" << endl;
		
	}else if (umur >= 18 && umur <= 55){
		cout <<"\nVaksin Yang Cocok : \n" << " -Pfizer\n " << "-Moderna\n " << "-Sinovac\n " << "-AstraZeneca\n " << "-Novavax\n " << "-Sinopharm\n" << endl;
		
	}else if (umur > 59 && umur <=80){
		cout <<"\nVaksin Yang Cocok : \n" << " -Pfizer\n " << "-Moderna\n " << "-Sinovac\n " << "-Sinopharm\n" << endl;
		
	}else if (umur > 80 ){
		cout <<"\nVaksin Yang Cocok : \n" << " -Pfizer\n " << "-Moderna\n " << "-Sinovac\n " << endl;
	
	}else if (umur <= 12){
		cout <<"\nVaksin Yang Cocok : \n" << " -Tidak Ada Vaksin Yang Cocok" << endl;
	}
	return 0;
	
}
	
