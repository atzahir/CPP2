#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
    int vk,ks,spasi,angka,simbol; //deklarasi nilai counter
    int n,jml=0;               //variabel n Penerapan fungsi string
    char cari;
    char kalimat[100],a[100],b[100],c[100],d[100]; //variabel counter
    vk=ks=spasi=angka=simbol=0;

    cout <<"\t\tPROGRAM MENGKATEGORIKAN CHAR (KARAKTER)\n";
    cout <<"\t\t=======================================\n\n";
    cout <<"Masukkan Kalimat : ";
    cin.getline(kalimat,sizeof(kalimat)); //input kalimat
    n=strlen(kalimat); //fungsi untuk menentukan pnjang string

    for(int i=0;i<n;i++){ //pengecekkan array
        if(kalimat[i]=='a'||kalimat[i]=='i'||kalimat[i]=='u'||kalimat[i]=='e'||kalimat[i]=='o'){ //jika huruf vokal
            a[vk]=kalimat[i];
            vk++;
        }
        else if(kalimat[i]=='A'||kalimat[i]=='I'||kalimat[i]=='U'||kalimat[i]=='E'||kalimat[i]=='O'){//jika huruf vokal
            a[vk]=kalimat[i];
            vk++;
        }
        else if(kalimat[i]>='A' && kalimat[i]<='Z'){//jika huruf konsonal
            b[ks]=kalimat[i];
            ks++;
        }
        else if(kalimat[i]>='a' && kalimat[i]<='z'){////jika huruf konsonal
            b[ks]=kalimat[i];
            ks++;
        }
        else if(kalimat[i]>='0' && kalimat[i]<='9'){//jika angka
            c[angka]=kalimat[i];
            angka++;
        }
        else if(kalimat[i]==' '){//jika spasi
            spasi++;
        }
        else{ //jika simbol
            d[simbol]=kalimat[i];
            simbol++;
        }
      }
      cout<<"Jumlah Huruf Vokal\t= "<<vk<<" : ";
    for(int i=0;i<vk;i++){ //pengeluaran huruf vokal
     cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Jumlah Huruf Konsonan\t= "<<ks<<" : ";
    for(int i=0;i<ks;i++){ //pengeluaran huruf konsonal
     cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"Jumlah Angka\t\t= "<<angka<<" : ";
    for(int i=0;i<angka;i++){ //pengeluaran angka
     cout<<c[i]<<" ";
    }
    cout<<endl;
    cout<<"Jumlah simbol\t\t= "<<simbol<<" : ";
    for(int i=0;i<simbol;i++){ //pengeluaran simbol
     cout<<d[i]<<" ";
    }
    cout<<endl;
    cout<<"Jumlah Spasi\t\t= "<<spasi<<endl<<endl;

    cout<<"Masukkan data yang anda cari : "; cin>>cari;
    for(int i=0;i<n;i++){ //pengecekkan data
        if(kalimat[i]==cari){
            jml++;
        }
    }
    if(jml>0) //apabila jumlah >0 maka data ditmukan
        cout<<jml<<" Data Ditemukan !!!";
    else
        cout<<" Data Tidak Ditemukan !!!";

    getch();
  }