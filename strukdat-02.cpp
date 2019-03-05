/*
Nama        : Daniel Rama H.
NPM         : 140810180045
Kelas       : A
Tanggal     : 5 Maret 2019
*/

#include <iostream>
using namespace std;

void moveZeroToEnd(int arr[5], int n){
    for(int i=0; i<n; i++)
    {
        if (arr[i]==0)
        {
            arr[i]=arr[i+1];
        }
    }
    }

void input(int(&arr)[100], int& n){
    cout<<"Banyaknya data : ";cin>>n;
    for(int i=0; i<n; i++)
    {
        cout<<"Masukkan data ke-"<<i+1<<"  ";cin>>arr[i];
    }
    }
void output(int arr[5], int n){
    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
}
int main()
{
int arr[100];
int n;
input(arr, n);
moveZeroToEnd(arr, n);
output(arr, n);
}
