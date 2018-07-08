#include <iostream>
#include <conio.h>
#include <math.h>
#include <cstdlib>
using namespace std;

	int i,n;
	string data[10][10];
	float nilai [10][10];

int tampilan()
{
	cout << "----==== PROGRAM PENGHITUNG NILAI AKHIR\n";
	cout << "  1. PENGINPUTAN\n";
	cout << "  2. MENAMPILKAN\n";
	cout << "  3. EXIT\n";
}

int penginputan()
{

	system("cls");
	cout << "----==== PENGINPUTAN ====----\n";
	cout << "MASUKAN BANYAK DATA INPUTAN = ";
	cin  >> n;
	
	for (int i=0; i<n; i++)	{
	cout << "----==== DATA KE "<< i+1<<"\n";
	cout << "MASUKAN NAMA LENGKAP (MAX 2 KATA) = ";
	cin  >> data[i][0];
	cin  >> data[i][1];
	cout << "MASUKAN NIM = ";
	cin  >> data[i][2];
	cout << "MASUKAN NILAI UTS = ";
	cin  >> nilai[i][0];
	cout << "MASUKAN NILAI UAS = ";
	cin  >> nilai[i][1];
	cout << "MASUKAN NILAI TUGAS = ";
	cin  >> nilai[i][2];
	
		
	nilai [i][3]=0.45*nilai[i][1]+0.30*nilai[i][0]+0.25*nilai[i][2];
	
	if (nilai[i][3]>=80)
		data[i][3]="A",data[i][4]="LULUS";
	else if  (nilai[i][3]>=70)
		data[i][3]="B",data[i][4]=" LULUS";
	else if (nilai[i][3]>=60)
		data[i][3]="C",data[i][4]=" LULUS";
	else if (nilai[i][3]=50)
		data[i][3]="D",data[i][4]="TIDAK LULUS";
	else 
		data[i][3]="E",data[i][4]="TIDAK LULUS";

}
cout << "\ntekan lagi untuk mengulang";
}

int menampilkan()
{	system("cls");
	for (int i=0; i<n; i++){
	cout << "---=== MENAMPILKAN ===---\n";
	cout << "=========================\n";
	cout << "NAMA LENGKAP \t = "<<data[i][0]<<" "<<data[i][1]<<"\n";
	cout << "NOMOR NIM    \t = "<<data[i][2]<<"\n";
	cout << "NILAI UTS    \t = "<<nilai[i][0]<<"\n";
	cout << "NILAI UAS    \t = "<<nilai[i][1]<<"\n";
	cout << "NILAI TUGAS  \t = "<<nilai[i][2]<<"\n";
	cout << "NILAI AKHIR  \t = "<<nilai[i][3]<<"\n";
	cout << "GRADE        \t = "<<data[i][3]<<"\n";
	cout << "KETERANGAN   \t = "<<data[i][4]<<"\n";
	
}
cout << "\ntekan lagi untuk mengulang";
}

int main ()
{
	int pil;
	main :
		system ("cls");
	tampilan();
	cout << "MASUKAN PILIHAN = ";
	cin  >> pil;
	
	switch (pil)
	{
		case 1:
	penginputan();
	getch ();
	goto main;
	case 2:
	menampilkan();
	getch ();
	goto main;
	case 3:
	return 0;
	default :
		cout << "DATA MENU TIDAK DI TEMUKAN";
		getch ();
		goto main;
}}
