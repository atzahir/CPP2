#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;


main(int argc, char const *argv[])
{
	int n;

	cout<<"Input jumlah data : ";
	cin>>n;

	struct data_nim
	{
		int angkatan;
		string nomorinduk;
		string prodi;
	};

	struct mahasiswa
	{
		string nama;
		struct data_nim nim[60];
	};
	struct mahasiswa mhs[n];

	for (int i = 0; i < n; i++)
	{
		cout<<"Data ke-"<<i+1<<" : "<<endl;
		cout<<"NIM      : ";
		cin>>mhs[i].nim[i].nomorinduk;
		cout<<"Nama     : ";
		getline(cin>>ws, mhs[i].nama);
		cout<<"Prodi    : ";
		getline(cin>>ws, mhs[i].nim[i].prodi);
		cout<<"Angkatan : ";
		cin>>mhs[i].nim[i].angkatan;
		system("cls");
	}

	for (int i = 0; i < n; i++)
	{
		cout<<"Data ke-"<<i+1<<" : "<<endl;
		cout<<"NIM      : "<<mhs[i].nim[i].nomorinduk<<endl;
		cout<<"Nama     : "<<mhs[i].nama<<endl;
		cout<<"Prodi    : "<<mhs[i].nim[i].prodi<<endl;
		cout<<"Angkatan : "<<mhs[i].nim[i].angkatan<<endl<<endl;
	}
	getch();
	return 0;
}
