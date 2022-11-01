#include <iostream>
#define SIZE 10
using namespace std;

int whatIsThis(int [], int);
int total, a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

int main()
{
 total = whatIsThis(a, SIZE);
 cout << "Nilai variabel total adalah " << total << endl << endl;
}

int whatIsThis(int b[], int size)
{
 if (size == 1)
 return b[0];
 else
 return b[size-1] + whatIsThis(b, size-1);
} 

/*
Kode program tersebut adalah program untuk mencetak nilai dari variable total dimana “array a” memiliki 10 element, program tersebut menghasilkan output total penjumlahan dari semua element “array a” karena “SIZE” memiliki jangkauan 10, dimana 10 mencakup semua element pada “array a”.

Program rumus penjumlahan didapatkan dari function “ whatIsThis(int b[], int size)
Penjabaran rumus :

SIZE = 10 maka pada kondis rumus hal ini menunjukan else, rumus tersebut akan mencetak nilai dari “array a[9] = 10”, dijumlahkan dengan jumlah element “array a yang memiliki jangkauan 9”. Maka didapatkan nilai 10 + 45 = 55. 

Maka variable “total” memiliki nilai value yang didapatkan dari function “whatIsThis(a, SIZE) adalah 55.

*(a, SIZE) menggantikan (int b[], int size)
*/