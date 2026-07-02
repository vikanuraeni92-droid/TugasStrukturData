#include <iostream>
#include <string>

// 1. Membuat Structure
struct Mahasiswa {
    std::string nama;
    std::string nim;
    float ipk;
};

int main() {
    // 2. Membuat Array dari Structure (Menampung 3 data mahasiswa)
    Mahasiswa daftarMhs[3] = {
        {"Vika", "101", 3.85},
        {"Nuraeni", "102", 3.90},
        {"Andi", "103", 3.50}
    };

    // 3. Membuat Pointer yang menunjuk ke Array Structure
    // Secara default, pointer ini akan menunjuk ke elemen pertama (indeks 0)
    Mahasiswa* ptrMhs = daftarMhs;

    std::cout << "=== DATA MAHASISWA (Menggunakan Pointer) ===" << std::endl;

    // Menampilkan data menggunakan perulangan dan pointer
    for (int i = 0; i < 3; i++) {
        // PERHATIKAN: Karena ptrMhs adalah pointer, kita gunakan arrow operator (->) 
        // untuk mengakses isi structure, bukan tanda titik (.)
        std::cout << "Mahasiswa ke-" << i + 1 << std::endl;
        std::cout << "Nama : " << (ptrMhs + i)->nama << std::endl;
        std::cout << "NIM  : " << (ptrMhs + i)->nim << std::endl;
        std::cout << "IPK  : " << (ptrMhs + i)->ipk << std::endl;
        std::cout << "-----------------------------------" << std::endl;
    }

    return 0;
}