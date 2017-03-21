#include <iostream>
#include <stdio.h>
using namespace std;
void Hasil_input(int hasil[], int a);
void Penjumlahan_polnm(int P1[], int P2[], int a,int b);
void Pengurangan_polnm(int P1[], int P2[], int a,int b);
void Perkalian_polnm(int P1[], int P2[], int a,int b);
void Turunan_polnm(int P1[], int P2[], int a, int b);
int i,j;
int main(){
	int pol1 , pol2;
	int pilihan;
	do{
		cout<<"\n"<<"==========PROGRAM MENGHITUNG POLINOMIAL=========="<<"\n";
		cout<<"\n\n"<<"~Jenis Persamaan Polinomial 1(P1)~: ";
		cout<<"\n"<<"Masukkan Nilai Pangkat terbesar x : ";
		cin>>pol1;
		int P1[pol1];
		cout<<endl<<"\n"<<"Masukkan Nilai Koefisien x :";
		for(i = 0; i <= pol1 ; i++){
			cout<<"\n"<<"x ^ = "<<i<<" : ";
			cin>>P1[i];
		}
		cout<<endl<<"\n"<<"Persamaan 1 : ";
		Hasil_input(P1,pol1);
		cout<<"\n\n"<<"~Jenis Persamaan Polinomial 2(P2)~: ";
		cout<<"\n"<<"Masukkan Nilai Pangkat x : ";
		cin>>pol2;
		int P2[pol2];
		cout<<endl<<"\n"<<"Masukkan Nilai Koefisien x";
		for(i = 0; i <= pol2; i++){
			cout<<"\n"<<"x ^ = "<<i<<" : ";
			cin>>P2[i];
		}
		cout<<endl<<"\n"<<"Persamaan 2 : ";
		Hasil_input(P2,pol2);
			cout<<"\n"<<"Operasi hitung : "<<"\n";
			cout<<"\n"<<"1.Penjumlahan ";
			cout<<"\n"<<"2.Pengurangan ";
			cout<<"\n"<<"3.Perkalian ";
			cout<<"\n"<<"4.Turunan ";	
			cout<<"\n"<<"5.Keluar";
			cout<<"\n"<<"Masukkan pilihan Anda : ";
			cin>>pilihan;
		switch(pilihan){
		case 1:
			cout<<"\n"<<"Hasil Penjumlahan = ";
			Penjumlahan_polnm(P1,P2,pol1,pol2);
			cout<<endl<<endl;
			cout<<"\n";
			break;
		case 2:
			cout<<"\n"<<"Hasil Pengurangan = ";
			Pengurangan_polnm(P1,P2,pol1,pol2);
			cout<<endl<<endl;
			cout<<"\n";
			break;
		case 3:
			cout<<"\n"<<"Hasil Perkalian = ";
			Perkalian_polnm(P1,P2,pol1,pol2);
			cout<<endl<<endl;
			cout<<"\n";
			break;
		case 4:
			Turunan_polnm(P1,P2,pol1,pol2);
			cout<<endl<<endl;
			cout<<"\n";
			break;
		case 5:
				break;
		default:
				cout<<"\n"<<"Pilihan Anda Tidak Ada...";
				cout<<"\n";
				break;
		}
	}
	while (pilihan != 5);
	cout<<"============================THANKYOU============================";
	cout<<endl;
	system("Pause");
	return 0;
}
void Hasil_input(int hasil[], int a){
	cout<<endl<<"\n"<<"P1 = ";
    for(i = 0; i <= a; i++){
        if(i != a){
            cout<<hasil[i]<<"x^"<<i<<" + ";
        }
        else{
            cout<<hasil[i]<<"x^"<<i;
        }
    }
}
void Penjumlahan_polnm(int P1[], int P2[], int a,int b) {
	int c;
	int d;
	if(a <= b){
		d= b;
	}
	else{
		d= a;
	}
	if(d==a)
	{
		for(c = b+1; c <= d; c++){
			P2[c]=0;
		}
	}
	else if(d==b){
		for(c = a+1; c <= d; c++){
			P1[c]=0;
		}
	}
	for( i = 0; i <= d;i++){
		P1[i]=P1[i]+P2[i];
	}
	for( i = 0; i<= d;i++){
		if(i!=d){
			cout<<P1[i]<<"x^"<<i<<" + ";
		}
		else{
			cout<<P1[i]<<"x^"<<i;
		}
	}
}
void Pengurangan_polnm(int P1[], int P2[], int a,int b){
	int c;
	int d;
	if(a <= b){
		d = b;
	}
	else{
		d = a;
	}
	if(d==a)
	{
		for(c = b+1; c <= d; c++){
			P2[c]=0;
		}
	}
	else if(d==b){
		for(c = a+1; c <= d; c++){
			P1[c]=0;
		}
	}
	for( i = 0; i <= d; i++){
		P1[i]=P1[i]-P2[i];
	}
	for( i = 0; i <= d; i++){
		if(i!=d){
			cout<<P1[i]<<"x^"<<i<<" + ";
		}
		else{
			cout<<P1[i]<<"x^"<<i;
		}
	}
}
void Perkalian_polnm(int P1[], int P2[], int a,int b){
	int x = 0;
	int kal1[50], kal2[50];
	for(i = 0; i <= b; i++){
		for(j = 0; j <= a; j++){
			kal1[x] = P2[j] * P1[i];
			kal2[x] = i + j;
			x++;
		}
	}
	for( i = 0; i < x; i++){
		if(i!= x-1){
			cout<<kal1[i]<<"x^"<<kal2[i]<<" + ";
		}
		else{
			cout<<kal1[i]<<"x^"<<kal2[i];
		}
	}
}
void Turunan_polnm(int P1[], int P2[], int a, int b){
	for( i = 0; i <= a; i++){
		P1[i] = P1[i+1]*(i+1);
	}
	cout<<"Turunan P1 = ";
	for( i = 0; i < a; i++){
		if(i!= a-1){
			cout<<P1[i]<<"x^"<<i<<" + ";
		}
		else{
			cout<<P1[i]<<"x^"<<i;
		}
	}
	for( i = 0; i <= b; i++){
		P2[i]=P2[i+1]*(i+1);
	}
	cout<<endl<<"Turunan P2 = ";
	for( i = 0; i < b; i++){
		if(i!= b-1){
			cout<<P2[i]<<"x^"<<i<<" + ";
		}
		else{
			cout<<P2[i]<<"x^"<<i;
		}
	}
}
