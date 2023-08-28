#include <iostream> //standart input output
#include <conio.h> //getcharacter
#include <stdio.h> //input & output

using namespace std;

int main()
{
    int harga_pesawat,pajak,jumlah; //panggilan integer
    char maskapai,destinasi,kelas,jenis,kembali; //panggilan character


menu:
    system("cls");
    cout <<"---------------------------------------------------------------------------------\n";
    cout <<"----------------- [ Program Pembelian Tiket Pesawat PT.LOSKIT ]-----------------\n";
    cout <<"\n";
    cout<<"==================---| Daftar Harga Tiket Pesawat PT.LOSKIT |---================== \n";
    cout<<"\n==================================================================================|\n";
    cout<<"|  Maskapai    |       Destinasi    | Ekonomi(PPN 2)|Bisnis(PPN 5)|Eksekutif(PPN 10)|\n";
    cout<<"==================================================================================  |\n";
    cout<<"    Rose Air         London,New York         50            70           120         |\n";
    cout<<"   Tulips Air        Ohio,Saint John         70            90           160         |\n";
    cout <<"---------------------------------------------------------------------------------\n";
    cout<<"=================================================================================== |\n";


    cout<<"\n";
    cout<<" ==> Masukkan Kode Pesawat [A-B] :";
    cin>>maskapai;
    switch(maskapai)
    {
        case 'A':
        {
            cout<<"====| Maskapai yang anda pilih : ROSE AIR |====\n";
            cout<<"\n";
            cout<<"| == > PILIH DESTINASI PESAWAT [L/N] |";
            cin>>destinasi;
            if (destinasi=='L' || destinasi=='l')
            {
                cout<<"====| Destinasi Kota London |====\n";
                cout<<"\n";
                cout<<"| == > PILIH KELAS PESAWAT [E/B/X]|";
                cin>>kelas;
                if(kelas=='E' || kelas=='e')
                {
                cout<<"====| Kelas Ekonomi |====\n";
                cout<<"\n";
                harga_pesawat = 50*12000;
                pajak = 2;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi London";
                cout<<"\nKelas Ekonomi";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                }
                //END NOTA

                 else if (kelas=='B' || kelas=='B')
                {
                cout<<"====| Kelas Bisnis |====\n";
                cout<<"\n";
                harga_pesawat = 70*12000;
                pajak = 5;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi London";
                cout<<"\nKelas Bisnis";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA

                }
                 else if (kelas=='X' || kelas=='x')
                {
                cout<<"====| Kelas Eksekutif |====\n";
                cout<<"\n";
                harga_pesawat = 120*12000;
                pajak = 10;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi London";
                cout<<"\nKelas Eksekutif";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis = 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA
                }

            }
            else if (destinasi=='N' || destinasi=='n')
            {
                cout<<"====| Destinasi Kota New York |====\n";
                cout<<"\n";
                cout<<"| == > PILIH KELAS PESAWAT [E/B/X]|";
                cin>>kelas;
                if(kelas=='E' || kelas=='e')
                {
                cout<<"====| Kelas Ekonomi |====\n";
                cout<<"\n";
                harga_pesawat = 50*10000;
                pajak = 2;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi New York";
                cout<<"\nKelas Ekonomi";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA

                }
                else if (kelas=='B' || kelas=='b')
                {
                cout<<"====| Kelas Bisnis |====\n";
                cout<<"\n";
                harga_pesawat = 70*10000;
                pajak = 5;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi New York";
                cout<<"\nKelas Bisnis";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                }
                //ENDNOTA

                 else if (kelas=='X' || kelas=='x')
                {
                cout<<"====| Kelas Eksekutif |====\n";
                cout<<"\n";
                harga_pesawat = 70*10000;
                pajak = 10;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi New York";
                cout<<"\nKelas Eksekutif";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA
                }
            }
            break;
        }


        case 'B':
        {
            cout<<"====| Maskapai yang anda pilih : Tulips AIR |====\n";
            cout<<"\n";
            cout<<"| == > PILIH DESTINASI PESAWAT [O/S]|";
            cin>>destinasi;
            cout<<"\n";
            if (destinasi=='O' || destinasi=='o')
            {
                cout<<"====| Destinasi Kota Ohio |====\n";
                cout<<"\n";
                cout<<"| == > PILIH KELAS PESAWAT [E/B/X]|";
                cin>>kelas;
                if(kelas=='E' || kelas=='e')
                {
                cout<<"====| Kelas Ekonomi |====\n";
                cout<<"\n";
                harga_pesawat = 70*15000;
                pajak = 2;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi Ohio";
                cout<<"\nKelas Ekonomi";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis = 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA

                }
                else if (kelas=='B' || kelas=='b')
                {
                cout<<"====| Kelas Bisnis |====\n";
                cout<<"\n";
                harga_pesawat = 90*15000;
                pajak = 5;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi Ohio";
                cout<<"\nKelas Bisnis";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA

                }
                else if (kelas=='X' || kelas=='x')
                {
                cout<<"====| Kelas Eksekutif |====\n";
                cout<<"\n";
                harga_pesawat = 160*150000;
                pajak = 10;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi Ohio";
                cout<<"\nKelas Eksekutif";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA

                }
            }


            else if (destinasi=='S' || destinasi=='s')
            {
                cout<<"====| Destinasi Kota Saint John |====\n";
                cout<<"\n";
                cout<<"| == > PILIH KELAS PESAWAT [E/B/X]|";
                cin>>kelas;
                if(kelas=='E' || kelas=='e')
                {
                cout<<"====| Kelas Ekonomi |====\n";
                cout<<"\n";
                harga_pesawat = 70*15000;
                pajak = 2;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi Saint John";
                cout<<"\nKelas Ekonomi";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA

                }
                else if (kelas=='B' || kelas=='b')
                {
                cout<<"====| Kelas Bisnis |====\n";
                cout<<"\n";
                harga_pesawat = 90*15000;
                pajak = 5;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi Saint John";
                cout<<"\nKelas Bisnis";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA

                }
                else if (kelas=='X' || kelas=='x')
                {
                cout<<"====| Kelas Eksekutif |====\n";
                cout<<"\n";
                harga_pesawat = 160*15000;
                pajak = 10;
                jumlah = harga_pesawat*pajak;
                cout<<"\n";
                cout<<"| == > PILIH JENIS TIKET PESAWAT [D/A]|";
                cin>>jenis;
                //NOTA
                cout<<"\n==================================";
                cout<<"\nNota: ";
                cout<<"\n==================================";
                cout<<"\nDestinasi Saint John";
                cout<<"\nKelas Eksekutif";
                cout<<"\nJenis Tiket Pesawat = " <<jenis;
                if(jenis == 'D')
                {
                    cout<<" (Dewasa) ";
                }else if (jenis == 'A')
                {
                    cout<<" (Anak) ";
                }
                cout<<"\nJumlah Bayar = Rp." <<jumlah;
                cout<<"\n==================================";
                //ENDNOTA
                }

            }
              break;
        }
            default:
            cout<<"---- Salah Kode ! ----";
    }
        do
    {
        ulang:
        cout<<"\n";
        cout<<"Mau Pesan Lagi [Y/N] ?";
        cin>>kembali;
        if (kembali == 'y')
        {
            goto menu;
        }else if (kembali == 'n')
        {
            cout <<"terimakasih";
        }else
        {
            goto ulang;
        }



 }
 while(kembali !='n');
 getch();
 }

