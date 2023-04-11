#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <iomanip>
#include <windows.h>
#include <string>
using namespace std;

//Perosess penimputan variable 
void gotoxy(int x,int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
	char jw,namaPembeli[30],namaBarang[30];
	float jumlahBeli,hargaSatuan,diskon,totalHarga,hargaDiskon,totalBayar,totDiskon,bayar,kembali;
	
	gotoxy(0,0);cout<<"Program Kasir Sederhana C++";
	gotoxy(0,1);cout<<"Created by Kel.1";
	gotoxy(0,2);cout<<"Build Ver.0.1";
	gotoxy(0,4);cout<<"Nama Pembeli:";
	gotoxy(0,5);cout<<"================================================================================";
	gotoxy(0,6);cout<<"| NO | Nama Barang |  Jumlah Beli  |  Harga Satuan  |  Diskon  |  Total Harga  |";
	gotoxy(0,7);cout<<"================================================================================";
	for(int i;i<=15;i++){
	gotoxy(0,8+i);cout<<"|    |             |               |                |          |               |";
	}
	
	gotoxy(0,23);cout<<"================================================================================";
	gotoxy(0,24);cout<<"|                                              Total Bayar|                    |";
	gotoxy(0,25);cout<<"|                                             Total Diskon|                    |";
	gotoxy(0,26);cout<<"|                                                    Bayar|                    |";
	gotoxy(0,27);cout<<"|                                                  Kembali|                    |";
	gotoxy(0,28);cout<<"================================================================================";
	
	int i=1;
	gotoxy(13,4);cin>>namaPembeli;
	
	do{	
		gotoxy(2,7+i);cout<<i;
		gotoxy(7,7+i);cin>>namaBarang;
		gotoxy(21,7+i);cin>>jumlahBeli;
		gotoxy(37,7+i);cin>>hargaSatuan;
		gotoxy(54,7+i);cin>>diskon;
		gotoxy(58,7+i);cout<<"%";
		hargaDiskon=(diskon/100)*(jumlahBeli*hargaSatuan);
		totalHarga=(jumlahBeli*hargaSatuan)-hargaDiskon;
		gotoxy(65,7+i);cout<<totalHarga;
				                              
		totalBayar=totalBayar+totalHarga;
		gotoxy(60,24);cout<<totalBayar;
		totDiskon=hargaDiskon;         
		gotoxy(60,25);cout<<totDiskon;
		
		           
		gotoxy(44,4);cout<<"isi data barang lagi [y/t] :";
		cin>>jw;
		i++;
		gotoxy(44,4);cout<<"                                    ";
		}while(jw=='y'||jw=='Y');
		
		gotoxy(60,26);cin>>bayar;
		kembali=bayar-totalBayar;
		gotoxy(60,27);cout<<kembali;
		
	getch();
}