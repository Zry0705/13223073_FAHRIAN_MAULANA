#include <iostream>
#include <fstream>
#include <vector>

int main() {  
    std::vector<double> sensor;
    int jumlah;
    double angka;

    std::cout << "Masukkan berapa angka yang ingin anda masukkan: ";
    std::cin >> jumlah;

    for (int i =0; i<jumlah; i++){
        std::cout << "Masukkan angka yang anda inginkan: ";
        std::cin >> angka;
        sensor.push_back(angka);
    }

    for (size_t i = 0; i < sensor.size(); i++) {
        sensor[i] = sensor[i] * 1.1;
    }

    // .size() akan otomatis bernilai 3  
    std::ofstream Hasil("hasil_kalibrasi.txt");
    if (Hasil.is_open()){
        for(int i = 0; i < sensor.size(); i++) { 
            Hasil << sensor[i] << "\n";    
        }
        Hasil.close();
    }
    return 0;  
}