/*
Nama        : Daniel Rama H.
Nama Program: exercise-01
Tanggal buat: 5 Maret 2019
NPM         : 140810180045
Deskripsi Program : struct
*/

#include<iostream>
#include<string.h>
using namespace std;

struct Orang{
int umur;
char nama[30];
char jk;
char goldar;
};

int main(){
Orang orang;
orang.umur=10;
strcpy(orang.nama, "fahmi");
orang.jk='L';
orang.goldar='O';


cout<<orang.umur<<endl;
cout<<orang.nama<<endl;
cout<<orang.goldar<<endl;
cout<<orang.jk<<endl;
}
