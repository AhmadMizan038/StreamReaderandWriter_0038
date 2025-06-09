#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string baris;

    //operasi file dalam mode menulis
    ofstream outfile;
    //menunjuk ke sebuah nama file untuk membuka 
    outfile.open("contoh.txt");

    cout << ">= Menulis file, \'q\'untuk keluar" << endl;

    //unlimeted loop untuk menulis
    while (true) {
        cout << "- ";
    //mendapatkan setiap karakter dalam satu baris
    getline(cin,baris);
    //loop akan berehanti jika anda memasukan karaktter q
    if (baris == "q") break;
    //menulis dan memasukan nilai dari baris ke dalam file
    outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup file nya
    outfile.close();

    //operasi file dalam mode membaca
    ifstream infile;

}
