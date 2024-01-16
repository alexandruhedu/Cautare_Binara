#include <iostream>

using namespace std;

int main()
{
    // Declararea variabilelor
    int st,dr,poz,m,x,i,n;
    int v[100];

    // Citirea numarului de numere din tabloul unidimensional
    cin >> n;

    // Introducerea tabloului unidimensional
    for(i=1;i<=n;i++)
        cin >> v[i];

    cin >> x; // Numarul care se cauta
    st = 1;
    dr = n;
    poz = 0;

    // Algoritmul cautarii binare
    while(st<=dr && poz==0)
    {
        m=(st+dr)/2;
        if(v[m]==x)
            poz = m;
        else
        {
            if(v[m]<x)
            st = m+1;
            else
                dr = m-1;
        }
    }

    // Afisarea rezultatului
    if(poz!=0)
        cout << "x apare in vector pe pozitia poz";
    else
        cout << "x nu apare in vector";
}
