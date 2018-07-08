#include <stdio.h>
#include <iostream>
#include <conio.h>
using namespace std;

main()
{ 
     int queue[5];
     int depan=0;
     int belakang=0;
     int pilihan, data, i;
     
     


  menu:
  cout<<"\t PROGRAM ARRAY OF QUEUE "<<endl;
  cout<<"\t MENU "<<endl;
  cout<<"\t 1. Masukan Data "<<endl;
  cout<<"\t 2. Keluarkan / Hapus Data ( FIFO )"<<endl;
  cout<<"\t 3. Keluarkan / Hapus Data ( LIFO )"<<endl;
  cout<<"\t 4. Lihat Data Antrian "<<endl;
  cout<<"\t 5. pemjumlahan "<<endl;
  cout<<"\t 6. Exit Program "<<endl;
  cout<<"\t Pilih Menu [1/2/3/4] ";
  cin>>pilihan;

  switch (pilihan)
  {
  case 1: //enqueue
  //apakah queue belum penuh?
  if (belakang < 5 )
  { 
  cout<<"\t Data Masuk = "; 
  cin>>data;
  queue[belakang] = data;
  belakang++;
  if (belakang == 0)
   depan = 0;
   }
   else
    cout<<"\t Queue penuh! \n";
    getch(); system("cls"); goto menu;
  

    case 2: //dequeue
    //apakah queue belum kosong?
    if (depan <= belakang)
    { 
          cout<<"\t Data keluar = "<<queue[belakang-1];
          belakang--;
          }
          else
    cout<<"\t Queue kosong!\n";
    getch(); system("cls");
  
    
    case 3: //dequeue
    //apakah queue belum kosong?
    if (depan <= belakang)
    { 
          cout<<"\t Data keluar = "<<queue[depan];
          depan++;
          }
          else
    cout<<"\t Queue kosong!\n";
    getch(); system("cls");
   
    
    
    case 4:
         cout<<endl;
         cout<<"\t Tampilan Data QUEUE Yang Sudah Di Masukan "<<endl; 
         for(i=depan; i<=belakang-1; i++)    
         cout<<"\t DATA ANTRIAN QUEUE "<<" "<<queue[i]<<endl;
         cout<<"\n";
         getch(); system("cls"); goto menu;
         
	case 5: 
		int nilai;
		nilai=0;
		for (int i=0;i<belakang;i++){
		nilai+=queue[i];
	}
		cout <<"\t hasil perjumlahan = "<<nilai;
		getch(); system("cls"); goto menu;


    case 6:
    		cout<<"\t TERIMAKASIH TELAH MENGGUNAKAN PROGRAM KAMI ";
    		return 0;
    		default :
    			cout << "\tMenu tidak ada ";
    			getch(); system("cls"); goto menu;

             
     
             
             }
             getch();
             
            
             	
             }

