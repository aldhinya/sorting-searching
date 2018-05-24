#include <iostream>

using namespace std;

int main()
{
    int nilai['n'];
    int tukar;
    int n;
    int min;
    int max;

    cout<<"> Input Batas = ";
    cin>>n;
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"Input nilai ke ["<<i+1<<"] = ";
        cin>>nilai[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        min = i;
        for (int j = i+1; j <= n-1; j++)
        {
            if (nilai[j] < nilai[min])
            {
                min =j;
            }
        }
        int tukar = nilai[min];
        nilai[min] = nilai[i];
        nilai[i]=tukar;
    }
    cout << endl;
    cout<<"> Ascending (terkecil->terbesar) : "<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke ["<< i+1 <<"] = " << nilai[i] << endl;
    }

    cout << endl;
    for (int i = 0; i <= n-2; i++)
    {
        max = i;
        for (int j = i+1; j <= n-1; j++)
        {
            if (nilai[j] > nilai[max])
            {
                max =j;
            }
        }
        int tukar = nilai[max];
        nilai[max] = nilai[i];
        nilai[i]=tukar;
    }
    cout<<"> Descending (terbesar->terkecil)"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data ke ["<< i+1 <<"] = " << nilai[i] << endl;
    }
    return 0;
}
