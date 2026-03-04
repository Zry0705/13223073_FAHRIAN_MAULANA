#include <iostream>
#include <string>
using namespace std;

class RekeningBank {
    private:
    double saldo = 112500;    

    public:
    void setor(double jumlah){
        saldo += jumlah;
        cout << "Saldo sekarang: Rp " << saldo << endl;

    }

    void tarik (double jumlah){
        if ((saldo - jumlah) < 20000){
            cout << "Saldo anda kurang dari mininum, lakukan setor atau kerja dulu!!" << endl; 
        }
        else{
            saldo -= jumlah;
            cout << "Saldo anda sekarang adalah : Rp " << saldo;
        }
    }
};

int main() {
    RekeningBank rekening;   // ini wajib buat objek dl

    int nominal;
    int perintah;

    cout << "Masukkan perintah anda:" << endl;
    cout << "1. Setor" << endl;
    cout << "2. Tarik" << endl;
    cin >> perintah;

    if (perintah == 1) {
        cout << "Masukkan nominal setor anda: ";
        cin >> nominal;
        rekening.setor(nominal);
    }
    else if (perintah == 2) {
        cout << "Masukkan nominal tarik anda: ";
        cin >> nominal;
        rekening.tarik(nominal);
    }

    return 0;
}