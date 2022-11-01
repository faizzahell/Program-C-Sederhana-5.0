#include <iostream>
using namespace std;

int main() {
  int matriks_pertama [3][3];
  int matriks_kedua [3][3];
  int matriks_hasil [3][3];
  int jumlah = 0;

  cout << "=========================================================" << endl;
  cout << "------------ Program Perkalian Matriks 3 x 3 ------------" << endl;
  cout << "=========================================================" << endl << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
  cout << "   :: Masukkan nilai dari matriks pertama dan kedua ::   " << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;

  cout << "  Masukkan nilai matriks pertama : " << endl << endl;

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << "  Matrik A (" << i + 1 << " " << j + 1 << ") = "; cin >> matriks_pertama [i][j];  
    }
  }

  cout << endl << "---------------------------------------------------------" << endl;

  cout << endl << "  Masukkan nilai matriks kedua : " << endl << endl;
  

  for(int i = 0; i < 3; i++) {
    for(int j = 0; j < 3; j++) {
      cout << "  Matrik B [" << i + 1 << " " << j + 1 << "] = "; cin >> matriks_kedua [i][j];  
    }
  }

  cout << endl << endl;
  cout << "=========================================================" << endl << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl;
  cout << "   ::            Hasil Perkalian Matriks            ::   " << endl;
  cout << "     ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~     " << endl << endl;
  cout << "  Hasil perkalian matriks ordo 3 x 3 : " << endl << endl;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      for(int k = 0; k < 3; k++){
        jumlah = jumlah + matriks_pertama [i][k] * matriks_kedua [k][j];
      }
      matriks_hasil [i][j] = jumlah;
      jumlah = 0;
    }
  }

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if (i == i && j == 0) {
        cout << "  |" << "  " << matriks_hasil [i][j] << "  ";
      } else if (i == i && j == 2) {
        cout << "  " << matriks_hasil [i][j] << "  " << "|";
      } else {
        cout << "  " << matriks_hasil [i][j] << "  ";
      }
    }
    cout << endl;
  }

  cout << endl;
  cout << "=========================================================" << endl;
  cout << "--------------- Program Perkalian Selesai ---------------" << endl;
  cout << "=========================================================" << endl;
  return 0;

}
