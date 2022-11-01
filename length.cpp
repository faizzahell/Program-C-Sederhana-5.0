#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int length;

  length = sizeof(arr)/sizeof(arr[0]);

  for(int i = 0; i < length; i++) {
    cout << "Data "<< i + 1 << " bernilai : " << arr[i] << endl;
  }

  cout << endl << "Panjang array adalah : " << length; 

  return 0;
}

/*
Cara kerjanya adalah panjang array didapatkan dengan cara melakukan pembagian ukuran array secara keseluruan (satuan bytes), dengan sizeof(arr[0]) yang merupakan ukuran elemen array di index 0.
*/