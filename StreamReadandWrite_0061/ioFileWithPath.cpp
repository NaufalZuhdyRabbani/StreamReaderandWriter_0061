#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "Memasukan Nama File : ";
	cin >> NamaFile;

	//membuka file dalam mode menulis
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter data satu baris
	}
} 