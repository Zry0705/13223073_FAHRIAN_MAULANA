#include <iostream>
#include <string>

// Class (Cetak Biru)  
class Mobil {  
public:  
    std::string merk;  
    std::string warna;  
    int tahun;

    // Method
    void nyalakanMesin() {  
        std::cout << "Mesin mobil " << merk << " (" << warna << ") menyala!" << std::endl;  
    }  
};

int main() {  
    // Membuat Object 
    Mobil mobil1;  
    mobil1.merk = "Toyota";  
    mobil1.warna = "Merah";  
    mobil1.tahun = 2022;

    // Membuat Object 
    Mobil mobil2;  
    mobil2.merk = "Honda";  
    mobil2.warna = "Hitam";  
    mobil2.tahun = 2020;

    Mobil mobil3;  
    mobil3.merk = "Koenigsegg Jesko";  
    mobil3.warna = "Putih";  
    mobil3.tahun = 2035;

    mobil1.nyalakanMesin();  
    mobil2.nyalakanMesin();
    mobil3.nyalakanMesin();

    return 0;  
}