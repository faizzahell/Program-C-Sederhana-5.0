#include <iostream>
using namespace std;

string admin;
int pilihan, pilihan_menu, kode_makanan, kode_minuman;
string makanan [] = {"Donat", "Martabak", "Gado-gado", ""};
string minuman [] = {"Matcha", "Thaitea", "Krampul", ""};
string makanan_ganti, minuman_ganti, nama_makanan, nama_minuman, pilihan_pengaturan;
int length_Makanan = sizeof(makanan)/sizeof(makanan[0]);
int length_Minuman = sizeof(minuman)/sizeof(minuman[0]);


int pengaturan() {
  cout << "=========================================================" << endl << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
  cout << "   ::            Pilihan Aksi Untuk Menu            ::   " << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;


  cout << "   Pilih beberapa aksi berikut : " << endl << endl;
  cout << "   1. Menambah Menu" << endl;
  cout << "   2. Mengubah Menu" << endl;
  cout << "   3. Menghapus Menu" << endl << endl;

  cout << "   Masukkan opsi pilihan : "; cin >> pilihan;
  cout << endl;
  cout << "=========================================================" << endl << endl;

  switch(pilihan) {
    case 3: {
      cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
      cout << "   ::              Aksi Menghapus Menu              ::   " << endl;
      cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;
      cout << "   Kode Menu makanan : " << endl << endl;

      if (makanan [3] == "") {
        for(int i = 0; i < length_Makanan - 1; i++) {
          cout << "   " << i + 1 << ". "  << "kode : (" << i + 1 << ")  " << makanan [i] << endl; 
        }
      } else {
        for(int i = 0; i < length_Makanan; i++) {
          cout << "   " << i + 1 << ". "  << "kode : (" << i + 1 << ")  " << makanan [i] << endl; 
        }
      }

      cout << endl << endl;

      cout << "   Kode Menu minuman : " << endl << endl;

      if (minuman [3] == "") {
        for(int i = 0; i < length_Minuman - 1; i++) {
          cout << "   " << i + 1 << ". " << " kode : (" << i + 1 << ")  " << minuman [i] << endl; 
        }
      } else {
        for(int i = 0; i < length_Minuman; i++) {
          cout << "   " << i + 1 << ". " << " kode : (" << i + 1 << ")  " << minuman [i] << endl; 
        }
      }

      cout << endl << "-----------------------------------------------------------" << endl << endl;
      cout << "   1. Makanan    2. Minuman " << endl;
      cout << endl << "-----------------------------------------------------------" << endl << endl;
      cout << "   Masukkan pilihan menu  :  "; cin >> pilihan_menu; 
      cout << endl << endl;

      switch(pilihan_menu) {
        case 1: {

          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::            Menghapus Menu Makanan             ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl << endl;

          cout << "   Masukkan kode makanan yang ingin dihapus  :  "; cin >> kode_makanan;

          cout << endl << "=========================================================" << endl << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::           Menu Makanan dan Minuman            ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

          cout << "   Menu makanan : " << endl << endl;

          for(int i = kode_makanan - 1; i < length_Makanan - 1; i++) {
            makanan [i] = makanan [i + 1];
          }

          if (makanan [3] == "") {
            for(int i = 0; i < length_Makanan - 2; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }

            length_Makanan -= 1;
          } else {
            for(int i = 0; i < length_Makanan - 1; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }

            length_Makanan -= 1;
          }

          cout << endl << endl << endl;

          cout << "   Menu Minuman : " << endl << endl;

          if (minuman [3] == "") {
            for(int i = 0; i < length_Minuman - 1; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            } 
          } else {
            for(int i = 0; i < length_Minuman; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            } 
          }
          break;
        }

        case 2: {

          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::            Menghapus Menu Minuman             ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl << endl;
    
          cout << "   Masukkan kode minuman yang ingin dihapus  :  "; cin >> kode_minuman;

          cout << endl << "=========================================================" << endl << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::           Menu Makanan dan Minuman            ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

          cout << "   Menu makanan : " << endl << endl;

          if (makanan [3] == "") {
            for(int i = 0; i < length_Makanan - 1; i++) {
              cout << "   " << i + 1 << ". " << makanan [i];
              cout << "   ";
            }
          } else {
            for(int i = 0; i < length_Makanan; i++) {
              cout << "   " << i + 1 << ". " << makanan [i];
              cout << "   ";
            }
          }

          cout << endl << endl << endl;

          cout << "   Menu minuman : " << endl << endl;

          for(int i = kode_minuman - 1; i < length_Minuman - 1; i++) {
            minuman [i] = minuman [i + 1];
          }

          if (minuman [3] == "") {
            for(int i = 0; i < length_Minuman - 2; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }

            length_Minuman -= 1;

          } else {
            for(int i = 0; i < length_Minuman - 1; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }

            length_Minuman -= 1;

          }
          break;
        }

        default : {
          cout << "=========================================================" << endl << endl;
          cout << "   Pilihan yang dimasukkan salah.";
        }

      }
      break;
    }

    case 2: {
      cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
      cout << "   ::              Aksi Mengubah Menu               ::   " << endl;
      cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;
      cout << "   Kode Menu makanan : " << endl << endl;

      if (makanan [3] == "") {
        for(int i = 0; i < length_Makanan - 1; i++) {
          cout << "   " << i + 1 << ". "  << "kode : (" << i + 1 << ")  " << makanan [i] << endl; 
        }
      } else {
        for(int i = 0; i < length_Makanan; i++) {
          cout << "   " << i + 1 << ". "  << "kode : (" << i + 1 << ")  " << makanan [i] << endl; 
        }
      }

      cout << endl << endl;

      cout << "   Kode Menu minuman : " << endl << endl;

      if (minuman [3] == "") {
        for(int i = 0; i < length_Minuman - 1; i++) {
          cout << "   " << i + 1 << ". " << " kode : (" << i + 1 << ")  " << minuman [i] << endl; 
        }
      } else {
        for(int i = 0; i < length_Minuman; i++) {
          cout << "   " << i + 1 << ". " << " kode : (" << i + 1 << ")  " << minuman [i] << endl; 
        }
      }

      cout << endl << "-----------------------------------------------------------" << endl << endl;
      cout << "   1. Makanan    2. Minuman " << endl;
      cout << endl << "-----------------------------------------------------------" << endl << endl;
      cout << "   Masukkan pilihan menu  :  "; cin >> pilihan_menu; 
      cout << endl << endl;

      switch(pilihan_menu) {
        case 1: {
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::            Mengubah Menu Makanan             ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl << endl;


          cout << "   Masukkan kode makanan yang ingin diubah :  "; cin >> kode_makanan;
          cout << endl;
          cout << "   Masukkan nama makanan baru              :  "; cin >> makanan_ganti;

          makanan [kode_makanan - 1] = makanan_ganti;

          cout << endl << "=========================================================" << endl << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::           Menu Makanan dan Minuman            ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

          cout << "   Menu makanan : " << endl << endl;

          if (makanan [3] == "") {
            for(int i = 0; i < length_Makanan - 1; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }
          } else {
            for(int i = 0; i < length_Makanan; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }
          }

          cout << endl << endl << endl;

          cout << "   Menu Minuman : " << endl << endl;

          if (minuman [3] == "") {
            for(int i = 0; i < length_Minuman - 1; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }
          } else {
            for(int i = 0; i < length_Minuman; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }
          }
          break;
        }

        case 2: {

          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::            Mengubah Menu Minuman              ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl << endl;

          cout << "   Masukkan kode minuman yang ingin diubah :  "; cin >> kode_minuman;
          cout << endl;
          cout << "   Masukkan nama minuman baru              :  "; cin >> minuman_ganti;

          minuman [kode_minuman - 1] = minuman_ganti;

          cout << endl << "=========================================================" << endl << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::           Menu Makanan dan Minuman            ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

          cout << "   Menu makanan : " << endl << endl;

          if (makanan [3] == "") {
            for(int i = 0; i < length_Makanan - 1; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }
          } else {
            for(int i = 0; i < length_Makanan; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }
          }

          cout << endl << endl << endl;

          cout << "   Menu Minuman : " << endl << endl;

          if (minuman [3] == "") {
            for(int i = 0; i < length_Minuman - 1; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }
          } else {
            for(int i = 0; i < length_Minuman; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }
          }
          break;
        }
        default : {
          cout << "=========================================================" << endl << endl;
          cout << "   Pilihan yang dimasukkan salah.";
        }
      }
      break;
    }

    case 1: {
      cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
      cout << "   ::              Aksi Menambah Menu              ::   " << endl;
      cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;
      cout << "   Kode Menu makanan : " << endl << endl;

      if (makanan [3] == "") {
        for(int i = 0; i < length_Makanan - 1; i++) {
          cout << "   " << i + 1 << ". "  << "kode : (" << i + 1 << ")  " << makanan [i] << endl; 
        }
      } else {
        for(int i = 0; i < length_Makanan; i++) {
          cout << "   " << i + 1 << ". "  << "kode : (" << i + 1 << ")  " << makanan [i] << endl; 
        }
      }

      cout << endl << endl;

      cout << "   Kode Menu minuman : " << endl << endl;

      if (minuman [3] == "") {
        for(int i = 0; i < length_Minuman - 1; i++) {
          cout << "   " << i + 1 << ". " << " kode : (" << i + 1 << ")  " << minuman [i] << endl; 
        }
      } else {
        for(int i = 0; i < length_Minuman; i++) {
          cout << "   " << i + 1 << ". " << " kode : (" << i + 1 << ")  " << minuman [i] << endl; 
        }
      }

      cout << endl << "-----------------------------------------------------------" << endl << endl;
      cout << "   1. Makanan    2. Minuman " << endl;
      cout << endl << "-----------------------------------------------------------" << endl << endl;
      cout << "   Masukkan pilihan menu  :  "; cin >> pilihan_menu; 
      cout << endl << endl;

      switch(pilihan_menu) {
        case 1: {

          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::            Menambah Menu Makanan              ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl << endl;

          if (makanan [3] == "") {
            length_Makanan -= 1;
          }

          for (int i = length_Makanan; i < length_Makanan + 1; i++) {
            cout << "   Masukkan menu makanan baru  :  "; cin >> nama_makanan;
          }

          length_Makanan += 1;

          makanan [length_Makanan - 1] = nama_makanan;

          cout << endl << "=========================================================" << endl << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::           Menu Makanan dan Minuman            ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

          cout << "   Menu makanan : " << endl << endl;

          for (int i = 0; i < length_Makanan; i++) {
            cout << "   " << i + 1 << ". " << makanan [i] << "   ";
          }

          cout << endl << endl << endl;

          cout << "   Menu Minuman : " << endl << endl;

          if (minuman [3] == "") {
            for(int i = 0; i < length_Minuman - 1; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }
          } else {
            for(int i = 0; i < length_Minuman; i++) {
              cout << "   " << i + 1 << ". " << minuman [i] << "   ";
            }
          }

          break;
        }

        case 2 : {
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::            Menambah Menu Minuman              ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl << endl;

          if (minuman [3] == "") {
            length_Minuman -= 1;
          }

          for (int i = length_Minuman; i < length_Minuman + 1; i++) {
            cout << "   Masukkan menu minuman baru  :  "; cin >> nama_minuman;
          }

          length_Minuman += 1;

          minuman [length_Minuman - 1] = nama_minuman;

          cout << endl << "=========================================================" << endl << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
          cout << "   ::           Menu Makanan dan Minuman            ::   " << endl;
          cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

          cout << "   Menu makanan : " << endl << endl;

          if (makanan [3] == "") {
            for(int i = 0; i < length_Makanan - 1; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }
          } else {
            for(int i = 0; i < length_Makanan; i++) {
              cout << "   " << i + 1 << ". " << makanan [i] << "   ";
            }
          }

          cout << endl << endl << endl;

          cout << "   Menu Minuman : " << endl << endl;

          for (int i = 0; i < length_Minuman; i++) {
            cout << "   " << i + 1 << ". " << minuman [i] << "   ";
          }

          break;
        }

        default : {
          cout << "=========================================================" << endl << endl;
          cout << "   Pilihan yang dimasukkan salah.";
        }
      }
      break;
    }
    default : {
      cout << "   Pilihan yang dimasukkan salah.";
    }
  }
  cout << endl << endl; 

  cout << "=========================================================" << endl << endl;
  cout << "   Tampilkan program pengaturan (y/n)  :  "; cin >> pilihan_pengaturan;
  cout << endl;
  if (pilihan_pengaturan == "y") {
  return pengaturan();
  } else if (pilihan_pengaturan == "n") {
  cout << "=========================================================" << endl;
  cout << "------------ Program Menu Restaurunt Selesai ------------" << endl;
  cout << "=========================================================" << endl;
  return 0;
  } else {
  cout << "   Pilihan yang dimasukkan salah." << endl << endl;
  cout << "=========================================================" << endl;
  cout << "----------- Program Menu Restaurunt Selesai ------------" << endl;
  cout << "=========================================================" << endl;
  return 0;
  }

}


int main() {
  cout << "=========================================================" << endl;
  cout << "---------------- Program Menu Restaurant ----------------" << endl;
  cout << "=========================================================" << endl << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
  cout << "   ::            Masukkan Username Admin            ::   " << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

  cout << "   Login program sebagai : "; cin >> admin;
  cout << endl;

  if (admin == "Faizahel") {
    cout << "=========================================================" << endl << endl;
    cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
    cout << "   ::           Menu Makanan dan Minuman            ::   " << endl;
    cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

    cout << "   Menu makanan : " << endl << endl;

    for(int i = 0; i < length_Makanan - 1; i++) {
      cout << "   " << i + 1 << ". " << makanan [i];
      cout << "   ";
    }

    cout << endl << endl << endl;

    cout << "   Menu Minuman : " << endl << endl;

    for(int i = 0; i < length_Minuman - 1; i++) {
      cout << "   " << i + 1 << ". " << minuman [i];
      cout << "  ";
    }

    cout << endl << endl; 

    cout << "=========================================================" << endl << endl;
    cout << "   Tampilkan program pengaturan (y/n)  :  "; cin >> pilihan_pengaturan;
    cout << endl;
    if (pilihan_pengaturan == "y") {
      return pengaturan();
    } else if (pilihan_pengaturan == "n") {
      cout << "=========================================================" << endl;
      cout << "----------- Program Menu Restaurunt Selesai ------------" << endl;
      cout << "=========================================================" << endl;
      return 0;
    } else {
      cout << "=========================================================" << endl << endl;
      cout << "   Pilihan yang dimasukkan salah." << endl << endl;
      cout << "=========================================================" << endl;
      cout << "------------ Program Menu Restaurunt Selesai ------------" << endl;
      cout << "=========================================================" << endl;
      return 0;
    }
  } else {
      cout << "=========================================================" << endl;
      cout << endl << "   Anda Bukan Admin." << endl << endl;
      cout << "   Key Admin = Faizahel " << endl << endl;
      return main();
   }
}
