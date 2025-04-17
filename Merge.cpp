#include<iostream>
using namespace std;

int arr[20], B[20];
int n;

void input()
{
    cout << "Masukan Panjang Element Array : ";
    cin >> n;
    if (n <=20)
        break;
    cout << "\nMaksimal Panjang Array adalah 20" << endl;
}