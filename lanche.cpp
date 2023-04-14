#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int id, qntd;
    float valor;

    cin >> id >> qntd;

    if(id == 1){
        valor = qntd * 4;
    } else if (id == 2){
        valor = qntd * 4.5;
    } else if (id == 3){
        valor = qntd * 5;
    } else if (id == 4){
        valor = qntd * 2;
    } else {
        valor = qntd * 1.5;
    }
    
    cout <<"Total: R$ " << setprecision(2) << fixed << valor << endl;
    

    return 0;
}
