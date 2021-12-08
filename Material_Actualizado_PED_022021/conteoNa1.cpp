#include <iostream>

using namespace std;

void contarIter(int);
void contarRec(int);

int main(void)
{
    int n;

    cout << endl;
    cout << "CONTEO DESCENDENTE DE N A 1" << endl << endl;

    cout << "¿En qué número comenzar? ";
    cin >> n;

    // Versión iterativa:
    contarIter(n);

    // Versión iterativa:
    contarRec(n);

    cout << endl;
    return 0;
}

void contarRec(int n)
{
    if(n >= 1){
        cout << n << endl;
        n = n - 1;
        contarRec(n);
    }
}

void contarIter(int n)
{
    while(n >= 1){
        cout << n << endl;
        n = n - 1;
    }
}
