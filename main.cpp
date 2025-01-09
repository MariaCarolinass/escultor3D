#include "sculptor.h"
#include "readfile.h"
#include <iostream>

using namespace std;

int main() {
    const int SIZE = 100;
    char input[SIZE];

    cout << "Digite o nome do arquivo: ";
    cin.getline(input, SIZE);

    if (input[0] == '\0') {
        cout << "Erro: Nenhum nome foi digitado." << endl;
    } else {
        Sculptor *objSculptor(ReadFile(input).objSculptor);
        objSculptor->writeVECT(input);
        objSculptor->writeOFF(input);
        cout << "Figura criada com sucesso!" << endl;
    }

    return 0;
}
