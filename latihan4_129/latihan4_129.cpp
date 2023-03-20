#include <iostream>
using  namespace std;

float luaspersegi(float p, float l){
    return p * l;
}
float luaslingkaran(float r) {
    return 3.14 * r * r;
}
float luassegitiga(float a, float t){
    return 0.5 * a * t;
}

int main()
{
    float panjang, lebar, jejari, alas, tinggi;
    int pilihan;

    do {
        cout << "\n\n==============" << endl;
        cout << "=========MENU=====" << endl;
        cout << "==================" << endl;
        cout << "1. luas persegi" << endl;
        cout << "2. luas lingkaran" << endl;
        cout << "3. luas segitiga" << endl;
        cout << "4. exit" << endl;
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
                cout << "masukan panjang = ";
                cin >> panjang;
                cout << "masukan lebar = ";
                cin >> lebar;
                cout << "luas persegi panjang = " << luaspersegi(panjang, lebar);
                break;
        case 2:
            cout << "masykan jari - jari = ";
            cin >> jejari;
            cout << "luas lingkaran = " << luaslingkaran(jejari);
            break;
        case 3:
            cout << "Masukan Alas = ";
            cin >> alas;
            cout << "masukan lebar = ";
            cin >> tinggi;
            cout << "luas segitiga = " << luassegitiga(alas, tinggi);
            break;
        case 4:
            break;

        }
        
    } while (pilihan != 4);
}