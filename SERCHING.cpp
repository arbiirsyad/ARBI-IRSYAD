#include <iostream>
#include <conio.h>
#include <windows.h>
#include <iomanip>
#include <stdio.h>

using namespace std;
int pil;
int tampilan()//fungsi tampilan
{
	
	system("cls");
    cout<<" ++++++++++++++++++++++++++++++++++++\n";
    cout<<" +         PROGRAM SEACRHING        +\n";
    cout<<" ++++++++++++++++++++++++++++++++++++\n";
    cout<<" +  1. BINARY SEARCH                +\n";
    cout<<" +  2. SEQUENTIAL SEARCH            +\n";
    cout<<" +  3. ABOUT                        +\n";
    cout<<" +  4. KELUAR                       +\n";
    cout<<" ++++++++++++++++++++++++++++++++++++\n";
    cout<<" PILIH MENU : "; 
    cin>>pil;
    
}

int funcbinary (int data[], int n, int k)
{
 int atas,bawah,tengah,posisi;
 bool ada;
 
 ada    = false;
 bawah  = 0;
 atas   = n - 1;
 posisi = -1;
 
 while (bawah <= atas)
 {
  tengah = (atas + bawah) / 2;
  if (k == data[tengah])
  {
   posisi = tengah;
   break;
  }
 else if (k < data[tengah]) atas = tengah - 1;
 else if (k > data[tengah]) bawah= tengah + 1;
 }
 return posisi;
}



int binary()
{
	//deklarasi variable
    int k,i,n,data[100],tmp,j; 
system("cls");
    cout<<"+++++++++++++++++++++++++++++++++++\n";
	cout<<"+          BINARY PROGRAM         +\n";
    cout<<"+++++++++++++++++++++++++++++++++++\n\n\n";

 //proses penginputan data
 cout<<"BERAPA ANGKA YANG ANDA INPUT = ";
 cin>>n;
 for (i=0;i<n;i++){

 cout << "INPUT ANGKA KE "<<i+1<<" =  "; 
 cin >> data[i];
}
	cout<<"\n-------------------------------------------------\n";
	//data yang belum di urutkan
  	cout<<"DATA SEBELUM DI URUTKAN : "<<endl;
   for(i=0; i<n; i++)
   {
       cout<<data[i]<<" ";
   }
 for(i=0; i<n; i++)
   {
       for(j=i+1; j<n; j++)
      {
          if(data[i]>data[j])
         {
             tmp = data[i];
            data[i] = data[j];
            data[j] = tmp;
         }
      }
   }
 cout<<"\n-------------------------------------------------";
 //data yang sudah di urutkan
 cout<<"\nDATA YANG SUDAH DI URUTKAN : "<<endl;
   for(i=0; i<n; i++)
   {
     cout<<data[i]<<" ";
   }
    cout<<"\n\n-------------------------------------------------\n";
    //proses pencarian binary rumus ada di function di atas
 	cout<<"INPUT DATA YANG INGIN DI CARI = ";
	cin>>k;
	 cout<<"\n-------------------------------------------------";

 int posisi = funcbinary (data,n,k);
 
 if (posisi != -1)
 {
  cout << "\nANGKA " << k << " DITEMUKAN PADA INDEKS KE " <<posisi<<" DARI URUTAN KE "<<posisi+1 << endl;
 }
 else
 {
  cout << "\nANGKA " << k << " TIDAK DITEMUKAN" << endl;
 }

}


int sequential()
{
        int data[10]={4,6,8,2,15,63,48,23,44,97},b,c,n;
      	int caridata, i, flag = 0;
		system("cls");
        cout<<"+++++++++++++++++++++++++++++++++++\n";
     	cout<<"+       SEQUENTIAL PROGRAM        +\n";
    	cout<<"+++++++++++++++++++++++++++++++++++ \n\n\n";
		cout<<"BAERAPA ANGKA YANG MAU DI INPUT = ";
 		cin>>n;
 		for (int i=0;i<n;i++){

 		cout << "INPUT ANGKA KE "<<i+1<<" =  "; 
 		cin >> data[i];
}
      cout<<"DATA YANG ADA PADA ARRAY :";
      for (int i=0;i<n;i++){
      cout<<data[i]<<" ";
  }

      cout<<"\n\nMASUKAN ANGKA YANG MAU DI CARI = ";
      cin>>caridata;

      //cari dengan metode sequential search()
      for(int i=0;i<8;i++){
	if(data[i] == caridata){
	flag = 1;
	}
	}

	if(flag == 1){
	cout<<"DATA DITEMUKAN PADA ARRAY\n"; 
	}
	else{
	cout<<"DATA TIDAK DI TEMUKAN\n";
	}
      _getche();
      return EXIT_SUCCESS;
}

int about(){
	cout<<"\n\n++++++++++++++++++++++++++++++++++++++++++++++++++\n";
	cout<<"+ TANGGAL PELUNCURAN MINGGU,08-04-2018/01:05 WIB +\n";
	cout<<"+ PROGRAM SEACRHING                              +\n";
	cout<<"+ ARBI IRSYAD                                    +\n";
	cout<<"+ 20170801052                                    +\n";
	cout<<"+ #CODING_GAMPANG                                +\n";
	cout<<"++++++++++++++++++++++++++++++++++++++++++++++++++";
}
int main()
{
          char menu;
          main:
        tampilan();//pemanggilan fungsi tampilan 
        
        switch (pil){
		
    case 1: 
        binary();
        getch();
        goto main;
        
    case 2:
        sequential();
        getch();
        goto main;
        
    case 3:
        about();
		getch();
        goto main;
   case 4:
   		cout<<"\n\nTERIMA KASIH TELAH MENGUNAKAN NYA\n";
   		cout<<"#CODING_GAMPANG\n\n";
       return 0;
    	default :
   			cout<<" MENU YANG ADA PILIH TIDAK TERSEDIA.";
    getch();
    goto main;
   
}
}
