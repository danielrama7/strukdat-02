/*
Nama        : Daniel Rama H.
Nama Program: exercise-02
Tanggal buat: 5 Maret 2019
NPM         : 140810180045
Deskripsi Program : struct
*/

#include<iostream>
#include<string.h>
using namespace std;

struct Theater{
int room;
char seat[3];
char movieTitle[30];
};

int main(){
Theater theater;
theater.room =7;
strcpy(theater.seat, "J9");
strcpy(theater.movieTitle, "Adit & Jarwo");


cout<<theater.room<<endl;
cout<<theater.seat<<endl;
cout<<theater.movieTitle<<endl;
}
