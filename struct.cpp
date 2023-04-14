#include <iostream>
using namespace std;


    int main(){

        struct{
            int rga;
            int telefone;
            struct{
                int dia;
                int mes;
            }dataaniversario;
        } dadosaluno;

        int n,dia, mes;

        cout <<"Digite um numero de 0 a 10" << endl;
        cin >> n;

        for (int i = 0; i < n; i++)
        {

            cout <<"Digite o RGA" << endl;
            cin >> dadosaluno.rga;

            cout <<"Digite o telefone" << endl;
            cin >> dadosaluno.telefone;

            cout <<"Digite o dia de aniversario" << endl;
            cin >> dadosaluno.dataaniversario.dia;

            cout <<"Digite o mes de aniversario" << endl;
            cin >> dadosaluno.dataaniversario.mes;

        }

        cout <<"Digita um dia" << endl;
        cin >> dia;

        cout <<"Digita um mes" << endl;
        cin >> mes;


        if (dia == dadosaluno.dataaniversario.dia && mes == dadosaluno.dataaniversario.mes){
            cout << "Fazem aniversario" << dadosaluno.rga << endl;
        }



return 0;
}