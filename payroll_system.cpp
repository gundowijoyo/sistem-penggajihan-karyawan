#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

// Struktur untuk menyimpan data karyawan
struct Karyawan {
    int id;
    string nama;
    double jamKerja;
    double gajiPerJam;
    double potongan;
    double bonus;
};

// Fungsi untuk menambahkan data karyawan
void tambahKaryawan(vector<Karyawan> &karyawanList) {
    Karyawan karyawanBaru;
    cout << "Masukkan ID karyawan: ";
    cin >> karyawanBaru.id;
    cin.ignore(); // Membersihkan input buffer
    cout << "Masukkan nama karyawan: ";
    getline(cin, karyawanBaru.nama);
    cout << "Masukkan jam kerja: ";
    cin >> karyawanBaru.jamKerja;
    cout << "Masukkan gaji per jam: ";
    cin >> karyawanBaru.gajiPerJam;
    cout << "Masukkan potongan: ";
    cin >> karyawanBaru.potongan;
    cout << "Masukkan bonus: ";
    cin >> karyawanBaru.bonus;

    karyawanList.push_back(karyawanBaru);
    cout << "Karyawan berhasil ditambahkan.\n";
}

// Fungsi untuk menghitung gaji bersih karyawan
double hitungGajiBersih(Karyawan k) {
    double gajiKotor = k.jamKerja * k.gajiPerJam;
    return gajiKotor - k.potongan + k.bonus;
}

// Fungsi untuk menampilkan slip gaji karyawan
void tampilkanSlipGaji(vector<Karyawan> &karyawanList) {
    int id;
    cout << "Masukkan ID karyawan: ";
    cin >> id;

    for (const auto &k : karyawanList) {
        if (k.id == id) {
            double gajiBersih = hitungGajiBersih(k);
            cout << fixed << setprecision(2);
            cout << "\nSlip Gaji\n";
            cout << "ID: " << k.id << "\n";
            cout << "Nama: " << k.nama << "\n";
            cout << "Jam Kerja: " << k.jamKerja << "\n";
            cout << "Gaji per Jam: " << k.gajiPerJam << "\n";
            cout << "Potongan: " << k.potongan << "\n";
            cout << "Bonus: " << k.bonus << "\n";
            cout << "Gaji Bersih: " << gajiBersih << "\n";
            return;
        }
    }
    cout << "Karyawan dengan ID " << id << " tidak ditemukan.\n";
}

// Fungsi untuk menampilkan laporan bulanan
void laporanBulanan(vector<Karyawan> &karyawanList) {
    cout << "\nLaporan Bulanan\n";
    cout << left << setw(5) << "ID" 
         << left << setw(20) << "Nama" 
         << left << setw(10) << "Gaji Bersih\n";
    for (const auto &k : karyawanList) {
        double gajiBersih = hitungGajiBersih(k);
        cout << left << setw(5) << k.id 
             << left << setw(20) << k.nama 
             << left << setw(10) << gajiBersih << "\n";
    }
}

int main() {
    vector<Karyawan> karyawanList;
    int pilihan;

    while (true) {
        // Menampilkan menu utama
        cout << "\nSistem Penggajian Karyawan\n";
        cout << "1. Tambah Karyawan\n";
        cout << "2. Tampilkan Slip Gaji\n";
        cout << "3. Laporan Bulanan\n";
        cout << "4. Keluar\n";
        cout << "Masukkan pilihan: ";
        cin >> pilihan;

        // Memproses pilihan pengguna
        switch (pilihan) {
            case 1:
                tambahKaryawan(karyawanList);
                break;
            case 2:
                tampilkanSlipGaji(karyawanList);
                break;
            case 3:
                laporanBulanan(karyawanList);
                break;
            case 4:
                return 0;
            default:
                cout << "Pilihan tidak valid.\n";
        }
    }
    return 0;
}
