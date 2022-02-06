#include<iostream>
using namespace std;

int main(){
	
float L, K, p, l;
cout << "Menghitung Luas Persegi Panjang\n================================"<<endl;
cout << "Masukkan nilai Panjang \t = ";
cin  >> p;
cout << "Masukkan nilai lebar \t = ";
cin  >> l;

L = p * l;
K = 2*p + 2*l;

cout << "Luas Persegi panjang yang diketahui : "<<endl;
cout << "panjang \t = "<<p<<"cm"<<endl;
cout << "lebar \t\t = "<<l<<"cm"<<endl;
cout << "adalah : "<<endl;
cout << "L = p x l \nL = "<<p<<" x "<<l<<""<<endl;
cout << "L = "<<L<<" cm"<<endl;
cout << "Luas Persegi Panjang tersebut adalah = "<<L<<" cm"<<endl;

cout << "\n";
cout << "Menghitung Keliling Persegi Panjang\n===================================="<<endl;
cout << "Keliling Persegi panjang yang diketahui : "<<endl;
cout << "panjang \t = "<<p<<"cm"<<endl;
cout << "lebar \t\t = "<<l<<"cm"<<endl;
cout << "adalah : "<<endl;
cout << "K = 2 x p + 2 x l\nK = 2 x "<<p<<" + 2 x "<<l<<""<<endl;
cout << "K = "<<K<<" cm"<<endl;
cout << "Keliling Persegi Panjang tersebut adalah = "<<K<<" cm"<<endl;
	
}