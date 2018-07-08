#include<iostream>
#include<conio.h>
#include<string>
#include<iomanip>

using namespace std;

int n,i;
int ia = 0,ib = 0;
struct ppkn{
	int harga0[50] = {},harga[50] = {},stok[50] = {} ,banyak0[50] = {},banyak [50] = {},total [50] = {},total0 [50] = {};
	string barang [50] = {};
};
ppkn data[100]={};
	
int tampilan()
{
	system("cls");
	cout<<"================================================\n";
	cout<<"||       APLIKASI PENGELOLA DATA APOTEK       ||\n";
	cout<<"================================================\n";
	cout<<"||   1. Masukan Data Barang                   ||\n";
	cout<<"||   2. update Data Nama Barang               ||\n";
	cout<<"||   3. update Data Harga Barang              ||\n";
	cout<<"||   4. update Data Stok Barang               ||\n";
	cout<<"||   5. Tampilkan Data Barang                 ||\n";
	cout<<"||   6. hitung penjualan                      ||\t\t\tbanyaknya inputan bisa di lakukan \n";
	cout<<"||   7. riwayat pembelian                     ||\t\t\tterus menerus pada menu 1\n";
	cout<<"||   8. pencarian list obat                   ||\n";
	cout<<"||   9. Exit                                  ||\n";
	cout<<"================================================\n";	
}

int penginputan(int &ia)
{
	int n;
		system("cls");
		cout<<"==========================================\n";
		cout<<"||     Silahkan Masukan Data Barang     ||\t\t\tNB: space pakai Underscore ( _ )\n";
		cout<<"==========================================\n";
		cout << "masukan berapa banyak barang";
		cin >>n;
		for (int i=0; i<n; i++){
			cout<<"Masukan Nama Barang\t: ";
			cin>>data[ia].barang[ia];
			cout<<"Masukan Harga Barang\t:Rp. ";
			cin>>data[ia].harga[ia];
			cout<<"Masukan Stok Barang\t: ";
			cin>>data[ia].stok[ia];
			ia++;
		}
			
			cout<<endl;
		getch();
	 
}

int menampilkan(int ia)
{
		system("cls");
		cout<<"======================================\n";
		cout<<"========= Tampil Data Barang =========\n";
		cout<<"======================================\n";
		for(int i=0; i<ia; i++){
			cout<<"===== Data ke "<<i+1<<" ===="<<endl;
			cout<<"id Barang "<<i<<endl;
			cout<<"Nama Barang \t="<<data[i].barang[i]<<endl;
			cout<<"Harga Barang \t=Rp. "<<data[i].harga[i]<<endl;
			cout<<"Stok Barang \t="<<data[i].stok[i]<<endl;
		cout<<endl;
	}
		getch();
	
	
}

int updatestok()
{
	system("cls");
	cout<<"===============================\n";
		cout<<"\tUpdate Data Stok Barang\n";
		cout<<"===============================\n";
		cout<<"Masukan Id Barang : ";
		cin>>i;
			cout<<"======================================\n";
			cout<<"id Barang "<<i<<endl;
			cout<<"Nama Barang \t="<<data[i].barang[i]<<endl;
			cout<<"Harga Barang \t=Rp. "<<data[i].harga[i]<<endl;
			cout<<"Stok Barang \t="<<data[i].stok[i]<<endl;
			cout<<"======================================\n\n";
		cout<<"Masukan Stok Barang terupdate  :\t";
		cin>>data[i].stok[i];
		
		cout<<endl;
		getch();
}

int updateharga()
{
	system("cls");
	cout<<"===============================\n";
		cout<<"\tUpdate Data Harga Barang\n";
		cout<<"===============================\n";
		cout<<"Masukan Id Barang : ";
		cin>>i;
			cout<<"======================================\n";
			cout<<"id Barang "<<i<<endl;
			cout<<"Nama Barang \t="<<data[ia].barang[i]<<endl;
			cout<<"Harga Barang \t=Rp. "<<data[ia].harga[i]<<endl;
			cout<<"Stok Barang \t="<<data[ia].stok[i]<<endl;
			cout<<"======================================\n\n";
			cout<<"Masukan harga Barang terupdate  :\t";
			cin>>data[ia].harga[i];
			cout<<endl;
			getch();
}

int updatebarang()
{
	system("cls");
	cout<<"===============================\n";
		cout<<"\tUpdate Data Nama Barang\n";
		cout<<"===============================\n";
		cout<<"Masukan Id Barang : ";
		cin>>i;
			cout<<"======================================\n";
			cout<<"id Barang "<<i<<endl;
			cout<<"Nama Barang \t="<<data[ia].barang[i]<<endl;
			cout<<"Harga Barang \t=Rp. "<<data[ia].harga[i]<<endl;
			cout<<"Stok Barang \t="<<data[ia].stok[i]<<endl;
			cout<<"======================================\n\n";
			cout<<"Masukan Nama Barang terupdate  :\t";
			cin>>data[ia].barang[i];
			cout<<endl;
			getch();
}

	
int transaksi(int &ib)
{
	
		system("cls");
		cout<<"======================================\n";
		cout<<"||       transaksi Penjualan        ||\n";
		cout<<"======================================\n";
		cout<<"Masukan id Barang Yang Ingin Di beli = ";
		cin>>i;
		cout<<"=====================================\n";
		cout<<"barang 	= "<<data[ia].barang[i]<<endl;
		cout<<"harga 	= Rp. "<<data[ia].harga[i]<<endl;
		cout<<"stok 	= "<<data[ia].stok[i]<<endl;
		cout<<"======================================\n";
		transaksi:
		cout<<"Masukan jumlah barang = ";
		cin>>data[ia].banyak[i];
		
		if (data[ia].stok[i]>=data[ia].banyak[i]){
		data[ia].total[i]=data[ia].banyak[i]*data[ia].harga[i];
		cout<<"Jumlah Harga RP."<<data[ia].total[i];
		cout<<endl;
		data[ia].stok[i]=data[ia].stok[i]-data[ia].banyak[i];
		data[ia].banyak0[ib]=data[ia].banyak[i];
		data[ia].total0[ib]=data[ia].total[i];
		data[ia].harga0[ib]=data[ia].harga[i];
		ib++;
	
	}
		else if (data[ia].stok[i]<data[ia].banyak[i]){
			cout<<"barang tersebut hanya tersisa "<<data[ia].stok[i]<<" stok";
			getch();
			system("cls");
		cout<<"======================================\n";
		cout<<"||       transaksi Penjualan        ||\n";
		cout<<"======================================\n";
		cout<<"Masukan ia Barang Yang Ingin Di beli = ";
		cin>>i;
		cout<<"======================================\n";
		cout<<"barang 	= "<<data[ia].barang[i]<<endl;
		cout<<"harga 	= Rp. "<<data[ia].harga[i]<<endl;
		cout<<"stok 	= "<<data[ia].stok[i]<<endl;
		cout<<"======================================\n";
			goto transaksi;
		}
	
		cout<<endl;
		getch();
}


int riwayat(int ib)
{
	system("cls");
	cout<<"=======================================\n";
	cout<<"||         Riwayat Penjualan         ||\n";
	cout<<"=======================================\n";
	for (int i=0; i<ib; i++){
	cout<<"dibeli "<<data[ia].banyak0[i]<<" * "<<data[ia].harga0[i]<<" = "<<data[ia].total0[i];
	cout<<endl;
}
	getch();

}


int list()
{
	system("cls");
	cout<<"=================================\n";
	cout<<"||       pencarian obat        ||\n";
	cout<<"=================================\n";
	cout<<"Masukan id Barang Yang Ingin Di cari = ";
	cin>>i;
	cout<<"=================================\n";
	cout<<"barang 	= "<<data[ia].barang[i]<<endl;
	cout<<"harga 	= Rp. "<<data[ia].harga[i]<<endl;
	cout<<"stok 	= "<<data[ia].stok[i]<<endl;
	cout<<"=================================\n";
	for(i=0 ; i<ia ;i++){
			cout<<"===== Data ke "<<i+1<<" ===="<<endl;
			cout<<"ia Barang "<<i<<endl;
			cout<<"Nama Barang \t="<<data[ia].barang[i]<<endl;
			cout<<"Harga Barang \t=Rp. "<<data[ia].harga[i]<<endl;
			cout<<"Stok Barang \t="<<data[ia].stok[i]<<endl;
		}
		getch();
}
	


int main(){
	
	int pilih;
	main:
	tampilan();
	cout<<"Silahkan Pilih Menu : ";
	cin>>pilih;
	switch(pilih){
		case 1 :
		penginputan(ia);
		goto main;
		
		case 2 :
		updatebarang();
		goto main;
		
		case 3 :
		updateharga();
		goto main;
		
		case 4 :
		updatestok();
		goto main;
		
		case 5 :
		menampilkan(ia);
		goto main;
		
		case 6 :
		transaksi(ib);
		goto main;
		
		case 7:
		riwayat(ib);
		goto main;
			
		case 8 :	
		list();
		goto main;
		
		case 9 :
		return 0;
		cout<<"Terimakasih sudah menggunakan program ini ^_^";
		default : cout<<"Pilihan Tidak tersedia "<<endl;
		getch();
		goto main;	}}
