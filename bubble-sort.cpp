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
    for (int i=1; i<=n; i++)
    {
        cout<<"Input Data ke ["<<i<<"] = ";
        cin>>nilai[i];
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(nilai[j]>nilai[j+1])
            {
                tukar=nilai[j+1];
                nilai[j+1]=nilai[j];
                nilai[j]=tukar;
            }
        }
    }
    cout << endl;
    cout<<"> Ascending (terkecil->terbesar) : "<<endl;
    for (int i=1; i<=n; i++)
    {
        cout<< "Data ke [" << i << "] = " << nilai[i] <<endl;
    }

    cout << endl;
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            if(nilai[j]<nilai[j+1])
            {
                tukar=nilai[j+1];
                nilai[j+1]=nilai[j];
                nilai[j]=tukar;
            }
        }
    }
    cout<<"> Descending (terbesar->terkecil)"<<endl;
    for (int i=1; i<=n; i++)
    {
        cout<< "Data ke [" << i << "] = " << nilai[i] <<endl;
    }
    return 0;
}
