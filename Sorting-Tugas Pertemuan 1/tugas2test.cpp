#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int limit, snp,temp;
	cout<<"Masukkan Jumlah Elemen : ";
	cin >> limit;
	int num[limit];
	
	cout << "Masukkan Nilai Elemen : ";
	for(int i = 0; i < limit; i++) {
		cin >> num[i];
	}
	
	cout << "Data Sebelum Sorting : ";
	for(int i = 0; i < limit; i++) {
		cout << num[i] << " ";
	}
	
    for(int i=0; i<limit-1; i++){
        snp=i;
        for(int j=i+1; j<limit; j++){
            if(num[j]<num[snp]){
                snp=j;
            }
        }

        if(num[i]>num[snp]){
            temp=num[i];
            num[i]=num[snp];
            num[snp]=temp;
        }
        cout << endl;
        cout << "Iterasi ke " << i+1 << " : ";
        for (int a = 0; a < 6; a++) {
        	cout << num[a] << " ";
		}
    }
    cout << endl;
    cout << "Data Setelah Sorting : ";
    for(int i = 0; i < limit; i++){
    	cout << num[i] << " ";
	}
}
