/*
    Program Gaji Karyawan
    Ket : Program untuk menentukan upah mingguan karyawan
    By  : Yudha Rizqia Grafer
    Tgl : 05 Oktober 2022
*/

#include <iostream>

using namespace std;

int main()
{
    //Kamus
    int jkerja, glembur, gjam, gaji;
    glembur = 100000;
    gjam = 150000;

    //Algoritma

    cout <<"*******************************************"<<endl;
    cout <<"*      Program Upah Mingguan Karyawan     *"<<endl;
    cout <<"* Upah per jam           : Rp. 150.000,00 *"<<endl;;
    cout <<"* Upah Lembur per jam    : Rp. 100.000,00 *"<<endl;;
    cout <<"*******************************************"<<endl;
    cout << "Masukan Jumlah Jam Kerja Karyawan : ";
    cin >> jkerja;
    cout <<"*******************************************"<<endl;

    if ( jkerja <= 48)
    {
        gaji = jkerja * gjam;
    }

    else if ( jkerja > 48 )
    {
        gaji = 48 * gjam + ((jkerja - 48 ) * glembur) ;
    }
        cout << "Gaji mingguanya adalah Rp. " << gaji << endl;
    return 0;
}
