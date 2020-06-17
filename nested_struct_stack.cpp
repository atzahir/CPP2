#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

#define max 10

struct datanilai
{
	float ipk;
};

struct mahasiswa
{
	string nama;
	string prodi;
	string nim;
	struct datanilai nilai;
}
mhs[max];

int stack[max];
int top;

void init()
{
	top = -1;
}

bool isFull()
{
	if (top == max - 1)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool isEmpty()
{
	if (top < 0)
	{
		return true;
	}
	else 
		return false;
}

void push(string nim, string nama, string prodi, float ipk)
{
	if (isFull())
	{
		cout<<"Stack Penuh"<<endl<<endl;
	}
	else
	{
		top++;
		mhs[top].nim = nim;
		mhs[top].nama = nama;
		mhs[top].prodi = prodi;
		mhs[top].nilai.ipk = ipk ;
	}
}

void pop()
{
	if (isEmpty())
	{
		cout<<"Stack Kosong"<<endl<<endl;
	}
	else
	{
		cout<<"NIM      : "<<mhs[top].nim<<endl;
		cout<<"Nama     : "<<mhs[top].nama<<endl;
		cout<<"Prodi    : "<<mhs[top].prodi<<endl;
		cout<<"IPK      : "<<mhs[top].nilai.ipk<<endl;
		top--;
	}
}

void show()
{
	if (isFull())
	{
		cout<<"Stack kosong"<<endl<<endl;
	}
	else
	{
		for (int i = 0; i < top + 1; i++)
		{
			cout<<"NIM         : "<<mhs[i].nim<<endl;
			cout<<"Nama        : "<<mhs[i].nama<<endl;
			cout<<"Prodi       : "<<mhs[i].prodi<<endl;
			cout<<"IPK         : "<<mhs[i].nilai.ipk<<endl;
			if (mhs[i].nilai.ipk>3.2)
			{
				cout<<"Keterangan  : A";
				cout<<endl<<endl;
			}
			else if (mhs[i].nilai.ipk>2.4)
			{
				cout<<"Keterangan  : B";
				cout<<endl<<endl;
			}
			else if (mhs[i].nilai.ipk>1.6)
			{
				cout<<"Keterangan  : C";
				cout<<endl<<endl;
			}
			else if (mhs[i].nilai.ipk>0.8)
			{
				cout<<"Keterangan  : D";
				cout<<endl<<endl;
			}
			else if (mhs[i].nilai.ipk>0)
			{
				cout<<"Keterangan  : E";
				cout<<endl<<endl;
			}
		}
	}
}

int main()
{
	int pilih;
	string nim, nama, prodi;
	float ipk;
	init();

	menu:
	system("cls");
	cout<<"1. Push"<<endl;
	cout<<"2. Pop"<<endl;
	cout<<"3. Show"<<endl;
	cout<<"4. Clear"<<endl;
	cout<<"5. Exit"<<endl;

	cout<<"Pilihan : ";
	cin>>pilih;

	switch(pilih)
	{
		case 1:
		cout<<"Masukkan NIM : ";
		cin>>nim;
		cout<<"Masukkan Nama : ";
		getline(cin>>ws, nama);
		cout<<"Masukkan Prodi : ";
		getline(cin>>ws, prodi);
		cout<<"Masukkan IPK : ";
		cin>>ipk;
		push(nim,nama,prodi,ipk);
		goto menu;
		break;

		case 2:
		pop();
		cout<<endl;
		system("pause");
		goto menu;
		break;

		case 3:
		show();
		system("pause");
		goto menu;
		break;

		case 4:
		init();
		cout<<"Data dibersihkan.";
		system("pause");
		goto menu;
		break;

		case 5:
		system("exit");
		break;
	}
	getch();
}
