#include <iostream>
#include "Persona.h"
using namespace std;

// TIP To <b>Run</b> code, press <shortcut actionId="Run"/> or click the <icon src="AllIcons.Actions.Execute"/> icon in the gutter.
int main() {
    // TIP Press <shortcut actionId="RenameElement"/> when your caret is at the <b>lang</b> variable name to see how CLion can help you rename it.
    Persona persona("jorge","Hernandez",39);
    //endl => salto de linea
    cout << "Nombre: " << persona.getNombreCompleto() << endl;
    cout << "Edad: " << persona.getEdad() << endl;
    cout << "Mis tareas: " << persona.misTareas() << endl;
    return 0;
    // TIP See CLion help at <a href="https://www.jetbrains.com/help/clion/">jetbrains.com/help/clion/</a>. Also, you can try interactive lessons for CLion by selecting 'Help | Learn IDE Features' from the main menu.
}