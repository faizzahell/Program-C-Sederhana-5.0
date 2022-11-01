#include <iostream>
using namespace std;

int mataKuliah(int, int);
int kode_hari, shift;
string hari, sesi, pilihan;
string jadwal [5][4] = {
  {"Gambar Teknik", "-", "Teknik Instrumentasi Praktik", "-"}, 
  {"Elektronika Analog", "Teknik Instrumentasi Teori", "-", "-"}, 
  {"Matematika Teknik", "Fisika Teknik", "-", "-"}, 
  {"Pemrograman Dasar", "-", "Bahasa Inggris", "-"}, 
  {"Desain Elektronika Analog", "-", "Rangkaian Listrik DC", "-"}
};

int main() {
  cout << "========================================================" << endl;
  cout << "------------ Program Penampil Jadwal KUliah ------------" << endl;
  cout << "========================================================" << endl << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
  cout << "   ::              List Mata Kuliah                ::   " << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

  for(int i = 0; i < 5; i++) {
    if (i == 0) {
      cout << "     Hari Senin :" << endl << endl;
    }
    if (i == 1) {
      cout << "     Hari Selasa :" << endl << endl;
    }
    if (i == 2) {
      cout << "     Hari Rabu  :" << endl << endl;
    }
    if (i == 3) {
      cout << "     Hari Kamis  :" << endl << endl;
    }
    if (i == 4) {
      cout << "     Hari Jumat :" << endl << endl;
    }

    for(int j = 0; j < 4; j++) {
      cout << "      " << j + 1 << ".  " << jadwal [i][j] << endl;
    }
    cout << endl << endl << endl;

  }

  cout << "========================================================" << endl << endl;
  cout << "   Program mencari mata kuliah (y/n)  :  "; cin >> pilihan;
  cout << endl;

  if (pilihan == "y") {
    return mataKuliah(kode_hari, shift);
  } else if (pilihan == "n") {
    cout << "========================================================" << endl;
    cout << "------------ Program Jadwal Kuliah Selesai -------------" << endl;
    cout << "========================================================" << endl;

    return 0;
  } else {
     cout << "========================================================" << endl << endl;
    cout << "   Pilihan yang dimasukkan salah." << endl << endl;
    cout << "========================================================" << endl;
    cout << "------------ Program Jadwal Kuliah Selesai -------------" << endl;
    cout << "========================================================" << endl;
    
    return 0;
  }
}

int mataKuliah(int kode_hari, int shift) {

  cout << "========================================================" << endl << endl;

  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
  cout << "   ::              Mencari Mata kuliah             ::   " << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;
  cout << "   Masukkan kode Hari : "; cin >> kode_hari;
  cout << endl << "   Masukkan Shift     : "; cin >> shift;

  if (kode_hari < 1 || kode_hari > 5) {
    cout << endl << "========================================================" << endl;
    cout << endl << "   Kode hari yang dimasukkan salah." << endl << endl;
    return mataKuliah(kode_hari, shift);
  }
  if (shift < 1 || shift > 4) {
    cout << endl << "========================================================" << endl;
    cout << endl << "   Shift yang dimasukkan salah." << endl << endl;
    return mataKuliah(kode_hari, shift);
  }

  switch(kode_hari) {
    case 1: {hari = "Senin"; break;}
    case 2: {hari = "Selasa"; break;}
    case 3: {hari = "Rabu"; break;}
    case 4: {hari = "Kamis"; break;}
    case 5: {hari = "Jum'at"; break;}
  }

  switch(shift) {
    case 1: {sesi = "pertama"; break;}
    case 2: {sesi = "kedua"; break;}
    case 3: {sesi = "ketiga"; break;}
    case 4: {sesi = "keempat"; break;}
  }

  int kode_hari_revisi = kode_hari - 1;
  int shift_revisi = shift - 1; 
  cout << endl << "========================================================" << endl << endl;
  cout << "   Mata kuliah pada hari "<< hari << " shift " << sesi << endl;
  cout << "   adalah   [  " << jadwal [kode_hari_revisi][shift_revisi] << "  ]" << endl << endl;
  cout << "--------------------------------------------------------" << endl << endl;

  if (jadwal [kode_hari_revisi][shift_revisi] == "-") {
    cout << "   Yeayy, ndak ada jam kuliah nih " << endl;
    cout << "   Bisa ngoding di kost Hehehehhh !!! " << endl << endl;
  } else {
    cout << "   Kuliah yang bener ya:) " << endl;
    cout << "   Biar bisa sukses ngebahagiain Ibuk !!!!" << endl << endl;
  }

  cout << "========================================================" << endl << endl;
  cout << "   Program mencari mata kuliah (y/n)  :  "; cin >> pilihan;
  cout << endl;

  if (pilihan == "y") {
    return mataKuliah(kode_hari, shift);
  } else if (pilihan == "n") {
    cout << "========================================================" << endl;
    cout << "------------ Program Jadwal Kuliah Selesai -------------" << endl;
    cout << "========================================================" << endl;

    return 0;
  } else {
    cout << "   Pilihan yang dimasukkan salah." << endl << endl;
    cout << "========================================================" << endl;
    cout << "------------ Program Jadwal Kuliah Selesai -------------" << endl;
    cout << "========================================================" << endl;
    return 0;
  }
}
