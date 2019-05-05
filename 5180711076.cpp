#include <iostream>
using namespace std;

main(){

int member;
string namaku,cari;
int indeks, j, total=0,total1=0;
int b,diskon;
int h,pelanggan;
string nomor[5] ={"A001", "A002", "A003", "A007", "A008" };
string nama[5]={ "Bayu", "Irvan" , "Susiati" , "Diana" , "Roni" };

cout<<"---------------SELAMAT DATANG DITOKO KAMI------------------"<<endl;

cout<<"\n 1. member ";
cout<<"\n 2. non member ";
cout<<"\n masukan pilihan : ";
cin>>member;
if(member==1)
{
     cout<<"masukan nomor identitas : ";cin>>cari;
     for(int i=0;i<5;i++)
        if(cari==nomor[i])
     {
         namaku= nama[i];
     }

     cout<<"\n ID   : "<<cari;
     cout<<"\n Nama : "<<namaku;

     cout<<"\n jumlah barang pembelian : ";
     cin>>j;
     for(int z=0;z<j;z++)
     {
       cout<<"\n Nama barang : ";
       cin>>b;
       cout<<"\n Harga       : ";
       cin>>h;

       total=total+h;
     }


     cout<<"\n selamat anda mendapat kan diskon sebesar 5%";
     diskon=total*5/100;
     total=total-diskon;
     cout<<"\n total kena diskon : "<<total;
}
else if(member==2)
{
    cout<<"\nmasukan nama anda: ";
    cin>>pelanggan;
    cout<<"\n jumlah barang pembelian anda : ";
    cin>>j;
     for(int z=0;z<j;z++)
     {
       cout<<"\n jumlah barang : ";
       cin>>b;
       cout<<"\n Harga       : ";
       cin>>h;
        total1=b+h;

     }total=total+total1;
     cout<<"\anda tidak dapat diskon karena bukan member ";
     cout<<"\ntotal : "<<total;

}



}

