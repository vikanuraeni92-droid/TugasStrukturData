#include <iostream>


using namespace std;

struct Branch {
    string nama;
    int umur;
    Branch *kiri = NULL;
    Branch *kanan = NULL;
};

struct Tree {
    Branch *Root = NULL;
};

bool IsEmpty(Branch *&cabang) {
    return (cabang == NULL);
}

void Init(Branch *&cabang, string nama, int umur) {
    if(IsEmpty(cabang)) {
        cabang = new Branch;
        cabang->nama = nama;
        cabang->umur = umur;
    }
}

void InOrder(Branch *cabang) {
    if (!IsEmpty(cabang)) {
        InOrder(cabang->kiri);
        cout << cabang->nama << " - " << cabang->umur << " tahun\n";
        InOrder(cabang->kanan);
    }
}

int main() {
    Tree pohonKeluarga;
    
    Init(pohonKeluarga.Root, "Budi", 70);
    
    Init(pohonKeluarga.Root->kiri, "Andi", 54);
    Init(pohonKeluarga.Root->kanan, "Rere", 47);
    
    Init(pohonKeluarga.Root->kiri->kiri, "Dita", 18);
    Init(pohonKeluarga.Root->kiri->kanan, "Desi", 19);
    
    Init(pohonKeluarga.Root->kanan->kiri, "Fajari", 20);
    Init(pohonKeluarga.Root->kanan->kanan, "Putra", 21);
    
    cout << "Tampilan Secara InOrder :" << endl;
    InOrder(pohonKeluarga.Root);
    
    return 0;
}