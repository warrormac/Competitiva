#include <iostream>

using namespace std;

int calculadora(long OGs, long copia)
{
    if (copia == 0)
    {
        cout << "No";
        return 0;
    }
        
    if (copia == 1)
    {
        if (OGs == 0)
            cout << "Yes";
        else 
            cout << "No";
        return 0 ;
    }

    if ((OGs - copia + 1) % 2 == 0 && OGs >= copia - 1)
        cout << "Yes";
    else cout << "No";
}

int main()
{
    long x, y;
    cout << "ingrese el numero de OGs: ";
    cin >> x;
    cout << "ingrese el numero de copias: ";
    cin >> y;
    
    

    calculadora(x, y);
}




