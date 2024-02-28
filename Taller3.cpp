#include "libs/List.h"
#include "libs/TextFileHandler.h"
#include "libs/Match.h"

#include <iostream>


using namespace std;

 

int main() {
    
    int option = 0;

    List<Match> matchList;
    string inputFileName = "resultados.txt";
    const char delimiter = ',';

    do {
        printMenu();
        cin >> option;
        
        switch (option) {
            case 1:
                
                break;
            case 2:
                if (matchList.size == 0) {
                    cout << "Debe leer el archivo de texto primero" << endl;
                    break;
                }
                
                break;
            case 3:
               
                break;
            case 4:
                if (matchList.size == 0) {
                    cout << "La lista no puede estar vacía" << endl;
                    break;
                }
                
                break;
            case 5:
                if (matchList.size == 0) {
                    cout << "Debe leer el archivo de texto primero" << endl;
                    break;
                }
                
                break;
            case 6:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción inválida" << endl;
                break;
        }
    } while (option != 6);
    
    return 0;


}

void printMenu() {
    cout << "1. Leer archivo de texto" << endl;
    cout << "2. Mostrar lista de partidos" << endl;
    cout << "3. Agregar partido" << endl;
    cout << "4. Eliminar partido" << endl;
    cout << "5. Generar reportes" << endl;
    cout << "6. Salir" << endl;
    cout << "Ingrese una opción: ";
}
