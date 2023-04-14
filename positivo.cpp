#include <iostream>

using namespace std;

int main() {
    int cont;
    float n1, n2, n3, n4, n5, n6;
    cont = 0;

    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6;

    if (n1 > 0){
        cont = cont + 1;
    }

    if (n2 > 0){
        cont = cont + 1;
    }

    if (n3 > 0){
        cont = cont + 1;
    }

    if (n4 > 0){
        cont = cont + 1;
    }

    if (n5 > 0){
        cont = cont + 1;
    }

    if (n6 > 0){
        cont = cont + 1;
    }

    cout << cont << " valores positivos" << endl;

    return 0;
}
