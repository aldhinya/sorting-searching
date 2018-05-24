#include <iostream>

using namespace std;

int main()
{

    int nilai['n'];
    int cari;
    int n;
    bool ditemukan;
    int lokasi;

    cout <<"> Input Batas = ";
    cin>>n;

    for(int i=0; i<n; i++)
    {
        cout <<"Nilai ke ["<<i+1<<"] = ";
        cin>>nilai[i];
    }

    cout <<endl;

    do{
    cout <<"> Input nilai yang ingin dicari = ";
    cin>>cari;
    cout <<"\n> Proses Pencarian : ";
    for(int i=0; i<n; i++)
    {
        cout <<"\nNilai ke ["<<i+1 << "]";
        if(nilai[i]==cari)
        {
            ditemukan = true;
            cout <<" = Ketemu!";
            lokasi=i;
        }
    }
    cout << endl <<endl;
    if(ditemukan)
    {
        cout <<"> Nilai ditemukan pada indeks array ke ["<<lokasi+1 <<"]." <<endl <<endl;
    }
    else
    {
        cout <<"> ERROR: Nilai ["<<cari<<"] Tidak ditemukan."<<endl <<endl;
    }
    }while(true);
    return 0;
}
