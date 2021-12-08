#include <iostream>

using namespace std;

void contarIter(int n);
void contarRec(int, int);

int main(void)
{
    int n;

    cout << endl;
    cout << "CONTAR DEL 1 A N" << endl << endl;

    cout << "¿Hasta qué número contar? ";
    cin >> n;

    // Versión iterativa:
    contarIter(n);

    // Versión iterativa:
    contarRec(1, n);

    cout << endl;
    return 0;
}

void contarRec(int i, int n)
{
    if(i <= n){
        cout << i << endl;
        i = i + 1;
        contarRec(i, n);
    }
}

void contarIter(int n)
{
    int i;

    i = 1;
    while(i <= n){
        cout << i << endl;
        i = i + 1;
    }
}
