#include <iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>
using namespace std;
int temp,loc;
int array[100];
int jumlah;
int pil;
int tampilan()
{
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"+ MENU SORTING +\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"+ 1. BUBLE SORT +\n";
cout<<"+ 2. SELECTION SORT +\n";
cout<<"+ 3. INSERTION SORT +\n";
cout<<"+ 4. SHELL SORT +\n";
cout<<"+ 5. MARGE SORT +\n";
cout<<"+ 6. KELUAR +\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"MASUKAN PILIHAN = ";
cin>>pil;
}
int penginputan(){
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"MASUKAN NILAI JUMLAH = ";
cin>>jumlah;
for(int i=0; i<jumlah; i++)
{
cout<<"MASUKASN ANGKA "<<i+1<<" = ";
cin>>array[i];
}
}
int bubble1()
{
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"+ 1. BUBBLE SORT +\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"DATA YANG BELUM DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
for(int i=1;i<jumlah;++i)
 {
 for(int j=0;j<(jumlah-i);++j)
 if(array[j]>array[j+1])
 {
 temp=array[j];
 array[j]=array[j+1];
 array[j+1]=temp;
 }
 }
cout<<"\nDATA YANG SUDAH DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
}
int selection1()
{
int loc,min;
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"+ 2. SELECTION SORT +\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"DATA YANG BELUM DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
for(int i=0;i<jumlah-1;i++)
 {
 min=array[i];
 loc=i;
 for(int j=i+1;j<jumlah;j++)
 {
 if(min>array[j])
 {
 min=array[j];
 loc=j;
 }
 }
 temp=array[i];
 array[i]=array[loc];
 array[loc]=temp;
}
cout<<"\nDATA YANG SUDAH DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
}
int insertion()
{
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"+ 3. INSERTION SORT +\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
int temp,i,j;
cout<<"DATA YANG BELUM DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
for(i=1;i<=jumlah-1;i++){
 temp = array[i];
 j = i -1;
 while(array[j]>temp && j>=0)
 {
 array[j+1] = array[j];
 j--;
 }
array[j+1] = temp;
}
cout<<"\nDATA YANG SUDAH DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
}
void shell()
{
int n,i,j,jarak,simpan,t1,t2;
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"+ 4. SHELL SORT +\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"DATA YANG BELUM DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
cout<<endl<<endl;
jarak=jumlah/2;
while(jarak>0)
{
 for(i=jarak;i<jumlah-1;i++)
 {
 j=i-jarak;
 while(j>=0)
 {
 if(array[j+jarak]<array[j])
 {
 simpan=array[j];
 array[j]=array[j+jarak];
 array[j+jarak]=simpan;

 }
 j=j-jarak;
 }
 }
 jarak=jarak/2;
}
{
cout<<"\nDATA YANG SUDAH DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
}
}
void merge(int,int,int);
void merge_sort(int low,int high)
{
int mid;
if(low<high)
{
 mid=(low+high)/2;
 merge_sort(low,mid);
 merge_sort(mid+1,high);
 merge(low,mid,high);
}
}
void merge(int low,int mid,int high)
{
int h,i,j,b[90000],k;
h=low;
i=low;
j=mid+1;
while((h<=mid)&&(j<=high))
{
 if(array[h]<=array[j])
 {
 b[i]=array[h];
 h++;
 }
 else
 {
 b[i]=array[j];
 j++;
 }
 i++;
}
if(h>mid)
{
 for(k=j;k<=high;k++)
 {
 b[i]=array[k];
 i++;
 }
}
else
{
 for(k=h;k<=mid;k++)
 {
 b[i]=array[k];
 i++;
 }
}
for(k=low;k<=high;k++) array[k]=b[k];
}
void merge1()
{
int t1,t2;
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"+ 5. MERGE SORT +\n";
cout<<"+++++++++++++++++++++++++++++++++++++++++++++\n";
cout<<"DATA YANG BELUM DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
merge_sort(0,jumlah-1);
cout<<endl;
 {
cout<<"\nDATA YANG SUDAH DI URUT KAN\n";
for (int i=0;i<jumlah;i++)
{
cout<<array[i]<<" ";
}
}
}
int main()
{
main:
system("cls");
tampilan();
switch (pil){
case 1:
penginputan();
bubble1();
getch();
goto main;
case 2:
penginputan();
selection1();
getch();
goto main;
case 3:
penginputan();
insertion();
getch();
goto main;
case 4:
penginputan();
shell();
getch();
goto main;
case 5:
penginputan();
merge1();
getch();
goto main;
case 6:
return 0;
default :
cout<<" DATA TIDAK ADA DALAM MENU";
getch ();
goto main;
}
}
