#include <iostream>

using namespace std;

int main()
{
    int nilai['n'];
    int tukar;
    int n;

    cout<<"> Input Batas = ";
    cin>>n;
    cout<<endl;
    for (int i=0; i<n; i++)
    {
        cout<<"Input Data ke ["<<i+1<<"] = ";
        cin>>nilai[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (nilai[j] > nilai[j +1])
            {
                tukar = nilai[j];
                nilai[j]=nilai[j+1];
                nilai[j+1] = tukar;
            }
        }
    }
    cout << endl;
    cout<<"> Ascending (terkecil->terbesar) : "<<endl;
    for (int i=0; i<n; i++)
    {
        cout<< "Data ke [" << i+1 << "] = " << nilai[i] <<endl;
    }

    cout << endl;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            if (nilai[j] < nilai[j +1])
            {
                tukar = nilai[j];
                nilai[j]=nilai[j+1];
                nilai[j+1] = tukar;
            }
        }
    }
    cout<<"> Descending (terbesar->terkecil)"<<endl;
    for (int i=0; i<n; i++)
    {
        cout<< "Data ke [" << i+1 << "] = " << nilai[i] <<endl;
    }
    return 0;
}
