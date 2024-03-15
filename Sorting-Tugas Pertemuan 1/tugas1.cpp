#include <iostream>
using namespace std;

void Tampil(int x[], int j) {
	for(int a = 0; a < j; a++) {
			cout << x[a] << " ";
		}
}

int main() {
	int j;
	int temp;
	
	cout << "Masukkan Banyak Array : ";
	cin >> j;
	int x[j];
	
	for(int i = 0; i < j; i++) {
		cout << "Masukkan Angka ke- "<<i+1<<" : ";
		cin>>x[i];
	}
	
	cout << endl;
	//Proses Sorting
	for(int i = 0; i < j; i++) {
		for(int h = 0; h < j-1; h++) {
			if(x[h] > x[h+1]) {
				temp = x[h];
				x[h] = x[h+1];
				x[h+1] = temp;
			}
		}
		cout << endl;
		cout << "Proses Sorting " << i+1 << endl;
		Tampil(x, j);
	}
	
	cout << endl;
	cout << endl;
	cout << "Hasil Akhir : " << endl;
	Tampil(x,j);
	return 0; 
}
