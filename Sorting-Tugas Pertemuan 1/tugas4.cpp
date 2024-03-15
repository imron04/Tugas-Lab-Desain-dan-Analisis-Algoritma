#include <iostream>
using namespace std;

int main () {
	int limit;
	cout << "Jumlah Buku : ";
	cin >> limit;
	string arr[limit], temp;
	
	for (int i = 0; i < limit; i++) {
		cout << "Judul Buku ke- " << i+1<< " : ";
		cin >> arr[i];
	}
	cout << endl;
	cout << endl;
	cout << "Sebelum diurut : " << endl;
	for (int i = 0; i < limit; i++) {
		cout << arr[i] << ", ";
	}
//	//Proses Sorting
	for(int i = 0; i < limit; i++) {
		for(int h = 0; h < limit-1; h++) {
			if(arr[h] > arr[h+1]) {
				temp = arr[h];
				arr[h] = arr[h+1];
				arr[h+1] = temp;
			}
		}
		cout << endl;
		cout << "Proses Sorting " << i+1 << endl;
		for(int a = 0; a < limit; a++) {
			cout << arr[a] << ", ";
		}
	}
	
	cout << endl;
	cout << endl;
	cout << "Hasil : " << " ";
	for(int a = 0; a < limit; a++) {
			cout << arr[a] << ", ";
		}
}
