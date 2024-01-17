#include <iostream>
using namespace std;

int main (){
	float t, tt ;
	float tinggi;
	float berat;
	float bmi;
	
	cout << "Masukkan Tinggi Badan (cm): "; cin >> tinggi;
	cout << "Masukkan Berat Badan (kg): "; cin >> berat;
	
	t = tinggi/100; 
	tt = t * t;
	bmi = berat / tt ;
	cout << "Hasil : " << endl;
	cout <<"BMI = " << bmi << endl;
	
	if (bmi < 18.5 ){
	    cout << "Berat Badan Kurang" << endl;
	}
	    else if (bmi >= 18.5 && bmi <= 22.9){
		cout << "Berat Badan Normal" << endl;
	}
	    else if (bmi >= 23 && bmi <= 29.9){
		cout << "Berat Badan Berlebih" << endl;
    }
	    else if (bmi > 30){
		cout <<"Obesitas" << endl;
	}	
		
} 
	   

