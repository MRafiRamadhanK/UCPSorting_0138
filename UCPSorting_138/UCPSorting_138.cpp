//soal A
// 1. algortima insertion adalah dengan cara menaruh index 1 ke (temp), lalu dibandingkan dengan 
//    index 0, apabila temp lebih besar dari index 0 , maka tukar tempat antara temp dengan index 0.
//    sehingga nilai yang tadinya ada di index 0 berpindah ke temp dan nilai yang di temp berpindah ke index 0.
//    dan apabila nilai temp tidak melebihi index maka tidak perlu diadakan pertukaran nilai.
//    ulangi step yang sudah dilakukan ke semua index agar nilai menjadi berurutan

// 2. Dengan cara memindai list satu persatu. kemudian pilih salah satu 
//    dalam setiap scan, lalu taruh di tempat yang benar.caranya adalah
//    dengan mencari value terkecil di array[0] ke arr[arrn-1], lalu jikalau 
//    nilai terkecilnya ada pada index 0 maka tidak perlu dilakukan pergantian. apabila 
//    setelah pemindaian nilai terkecil ada pada salah satu index kecuali index 0 
//    maka harus bertukar posisi dengan index 0. lakukan semua cara ini dengan 
//    memindai semua index dan diurutkan sesuai nilai indexnya.

//3.  caranya adalah dengan melihat sudah berapa kali melakukan eksekusi nilai
//    pada sebuah index. atau mengetahui jumlah arraynya kemudian dikurangi oleh 1


#include <iostream>
using namespace std;
int rafi[38];
int n;

void selectionsort() {
    int i, j, min_index;

    for (i = 0; i < n - 1; i++) {
        min_index = i;
        for (j = i + 1; j < n; j++) {
            if (rafi[j] < rafi[min_index])
                min_index = j;
        }
    }

    if (min_index = i)
        swap(rafi[min_index], rafi[i]);

}

void input() {
	while (true) {
		cout << "Masukan banyaknya element pada array : ";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "nArray dapat mempunyai maksimal 20 elemen.n";
		}
	}

	cout << endl;
	cout << "=====================" << endl;
	cout << "masukan elemen array" << endl;
	cout << "===================== " << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << ": ";
		cin >> rafi[i];
	}
}
       
void display() {
	cout << endl;
	cout << "============================" << endl;
	cout << "Elemen array yang telah tersusun" << endl;
	cout << "============================" << endl;
	for (int j = 0; j < n; j++) {
		cout << rafi[j] << endl;
	}
	cout << "jumlah pass = " << n - 1 << endl;
	cout << endl;
}

int main()
{
	input();
	selectionsort();
	display();
	system("pause");


	return 0;
}