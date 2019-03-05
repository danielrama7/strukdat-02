/*
Nama        : Daniel Rama H.
Nama Program: exercise-03
Tanggal buat: 5 Maret 2019
NPM         : 140810180045
Deskripsi Program : array of struct
*/

#include <iostream>
using namespace std;

struct Data{
char nip[2];
char nama[30];
int gol;
int gaji;
};
typedef Data data[10];
int n;
void inputPegawai(data& nip, data& nama, data& gol, int& n)
{
    cout<<"Banyaknya pegawai : ";cin>>n;
    for(int i=0;i<n;i++){
    cout<<"Masukkan nip pegawai ke-"<<i<<" ";cin>>data[i].nip;
    cout<<"Masukkan nama pegawai ke-"<<i<<" ";cin.ignore();cin.getline(data[i].nama, 30);
    cout<<"Masukkan gol pegawai ke-"<<i<<" ";cin>>data[i].gol;
    }
}
void cetakDaftar(data& nip, data& nama, data& gol, int& n)
{
    for(int i=0;i<n;i++){
    cout<<"nip pegawai ke-"<<i<<" "<<data[i].nip;
    cout<<"nama pegawai ke-"<<i<<" "<<data[i].nama;
    cout<<"gol pegawai ke-"<<i<<" "<<data[i].gol;
    }
}
void cariGaji(data& gol, data& gaji)
{
    for(int i=0;i<n;i++)
    {
        if (data[i].gol==1){data[i].gaji=2000000};
        else if (data[i].gol==2){data[i].gaji=3000000};
        else if (data[i].gol==3){data[i].gaji=5000000};
        else if (data[i].gol==4){data[i].gaji=8000000};
    }
}
void rataGaji(data& gaji)
{
    for(int i=0;i<n;i++)
    {
     cout<<"rata-rata gaji : "<<data[i].gaji+data[i++].gaji
    }
}
void gajiTerendah(data& gaji)
{
    for(int i=0;i<n;i++)
    {
        if (data[i].gaji==2000000){cout<<"Gaji terendah : "<<data.gaji[i]}
        else if (data[i].gaji==3000000){cout<<"Gaji terendah : "<<data.gaji[i]}
        else if (data[i].gaji==5000000){cout<<"Gaji terendah : "<<data.gaji[i]}
        else if (data[i].gaji==8000000){cout<<"Gaji terendah : "<<data.gaji[i]}
    }
}
void gajiTertinggi(data& gaji)
{
    for(int i=0;i<n;i++)
    {
        if (data[i].gaji==8000000){cout<<"Gaji tertinggi : "<<data.gaji[i]}
        else if (data[i].gaji==5000000){cout<<"Gaji tertinggi : "<<data.gaji[i]}
        else if (data[i].gaji==3000000){cout<<"Gaji tertinggi: "<<data.gaji[i]}
        else if (data[i].gaji==2000000){cout<<"Gaji tertinggi: "<<data.gaji[i]}
    }
}

main()
{
inputPegawai(nip, nama, gol, n);
cetakDaftar(nip, nama, gol, n);
cariGaji(gol, gaji);
rataGaji(gaji);
gajiTerendah(gaji);
gajiTertinggi(gaji);
}
