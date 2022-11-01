#include <iostream>
using namespace std;

int main() {
  string nama [] = {"soto", "ayam", "brutu", "emping"};
  string nama_baru;
  int length = sizeof(nama)/sizeof(nama[0]);


  for (int i = length; i < length + 1; i++) {
    cout << "Masukkan nilai baru : "; cin >> nama_baru;
  }

  length += 1;

  nama [length - 1] = nama_baru;

  cout << endl << endl;

  cout << " nama baru =  ";
  for (int i = 0; i < length; i++) {
    cout << nama [i] << "  ";
  }

  cout << endl << endl << length;
}
