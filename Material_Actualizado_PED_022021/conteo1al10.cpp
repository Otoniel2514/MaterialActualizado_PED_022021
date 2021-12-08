#include <iostream>

using namespace std;

void contarIter(void);
void contarRec(int);

int main(void)
{
    cout << endl;
    cout << "CONTAR DEL 1 AL 10" << endl << endl;

    // Versión iterativa:
    contarIter();

    // Versión recursiva:
    contarRec(1);

    cout << endl;
    return 0;
}

void contarRec(int i)
{
    if(i <= 10){
        cout << i << endl;
        i = i + 1;
        contarRec(i);
    }
}

void contarIter(void)
{
    int i;

    i = 1;
    while(i <= 10){
        cout << i << endl;
        i = i + 1;
    }
}
