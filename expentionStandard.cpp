#include <iostream>
#include <exception>
// untuk objek exception yang akan di guanakan 
#include <array>
//untuk objek array yang akan kita gunakan 
using namespace std;

int main ()
{
    cout << "Awal Program" << endl; // penanda 1:....
    try{
        array<int, 3> data = { 1, 2, 3};
        //pesan array integer 3 elemen
        cout<<data.at(5)<<endl;
        //memanggil array elemen ke 5
    }
    catch (exception& e) {
        // pengangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan di eksekusi karna array data hanya memiliki 3 elemen*/
    }
    cout << "Baris Program Yang terakir" << endl;
    /*pemnanda2 : bahwa program berjalan tanpa berhenti meskipun terjadi kesalhan*/
    return 0;
}
