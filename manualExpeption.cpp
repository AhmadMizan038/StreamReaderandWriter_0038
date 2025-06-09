#include <iostream>
using namespace std;

int main()
{
    try {
        cout << "selamat belajar di prodi TI UMY" << endl;
        throw 0,5; //melemparkan sebuah integer maka
        cout << "Pertanyaan tidak akan di eksekusi" << endl;
    }
    catch (int a) {
        //blok ini akan di eksekusi
        cout << "Pengecaulian akan di eksekusi" << endl;
    }
    catch (...) {
        /*jika slain integer maka block ini akan di eksekusi*/
        cout << "default Pengecualian dieksekusi" << endl;
    }
}
