#include <iostream>

using namespace std;

int main () {
    int N, min, horas;
    cin >> N;
    horas = N / 3600;
    N = N % 3600;

    min = N / 60;
    N = N % 60;

    cout << horas << " :" << min << ": " << N;

    return 0;
}