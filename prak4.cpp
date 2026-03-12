#include <iostream>
using namespace std;

int arr[20];              //membuat array dengan panjang data 20
int n;                    //membuat variable inputan n

void input()//prosedur input
{
    while (true){
        cout << "Masukkan Jumlah Data Pada Array : ";
        cin >> n;

        if (n <= 20){
            break;
        }
        else{
            cout << "\nArray Tidak Boleh Lebih dari 20\n";
        }
    }
    cout << endl;
    cout << "=============================================";
    cout << "==========Masukan Elemen Array==============";
    cout << "=============================================" << endl;
    
    for (int i = 0; i < n; i++){
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }