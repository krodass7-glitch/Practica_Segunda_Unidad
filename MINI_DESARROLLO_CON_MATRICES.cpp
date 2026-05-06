#include <iostream>
using namespace std;

int main() {
    int asistencia[3][5];
    int suma, mayor = 0, estudianteMayor = 0;

    for(int i = 0; i < 3; i++) {
        cout << "Estudiante " << i+1 << endl;
        for(int j = 0; j < 5; j++) {
            cout << "Dia " << j+1 << " (1/0): ";
            cin >> asistencia[i][j];
        }
    }

    for(int i = 0; i < 3; i++) {
        suma = 0;
        for(int j = 0; j < 5; j++) {
            suma += asistencia[i][j];
        }
        cout << "Asistencia estudiante " << i+1 << ": " << suma << endl;

        if(suma > mayor) {
            mayor = suma;
            estudianteMayor = i+1;
        }
    }

    cout << "Estudiante con mayor asistencia: " << estudianteMayor << endl;

    return 0;
}