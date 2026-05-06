#include <iostream>
using namespace std;

int main() {
    int ventas[3][5];
    int suma, mayor = 0, sucursalMayor = 0;

    for(int i = 0; i < 3; i++) {
        cout << "Sucursal " << i+1 << endl;
        for(int j = 0; j < 5; j++) {
            cout << "Dia " << j+1 << ": ";
            cin >> ventas[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        suma = 0;
        for(int j = 0; j < 5; j++) {
            suma += ventas[i][j];
        }
        cout << "Total sucursal " << i+1 << ": " << suma << endl;

        if(suma > mayor) {
            mayor = suma;
            sucursalMayor = i+1;
        }
    }

    cout << "Sucursal con mayor ventas es la mumero no.: " << sucursalMayor << endl;

    return 0;
}