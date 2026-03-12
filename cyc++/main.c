#include <stdio.h>

typedef struct {
    char nombre[70];
    char departamento[40];
    int  edad;
    float salario;
} Empleado;

//prototipo
void captura(void);
int  registra(Empleado);
void menu();
void lectura(void);
void buscarPosicion(int);

int main(void) {
    menu();
    return 0;
}

void menu() {
    char opcion = '0';
    int posicion = 0;
    do {
        printf("Menu de opciones\n");
        printf("1. Alta\n");
        printf("2. Muestra todo\n");
        printf("3. Busca por posicion\n");
        printf("4. Salir\n");
        printf("Digita la opcion: ");
        scanf("%c",&opcion);
        switch (opcion) {
            case '1':
                captura();
                break;
            case '2':
                lectura();
                break;
            case '3':
                printf("Dame la posicion a leer: ");
                scanf("%d",&posicion);
                buscarPosicion(posicion);
                break;
            case '4':
                printf("\nAdios\n");
                break;
        }
    } while (opcion != '4');
}

void captura(void) {
    Empleado empleado;

    printf("Dame el nombre del empleado: ");
    scanf("%s",&empleado.nombre);
    printf("Dame el nombre del departamento perteneciente: ");
    scanf("%s",&empleado.departamento);
    printf("Dame la edad del empleado: ");
    scanf("%d",&empleado.edad);
    printf("Dame el salario: ");
    scanf("%f",&empleado.salario);
    registra(empleado)  ? //operador ternario
         printf("Insertado correctamente")
       : printf("Error de guardado");
}

int registra(Empleado empleado) {
    // w (write) => si no existe, lo crea; si existe; elimina su contenido
    // a (append)=> si no existe, lo crea; si existe; posiciona la nueva info al final del archivo
    // r (read) => sólo lectura
    // b (binary) => formato en bytes (word, mp3, pdf)
    FILE *archivo = fopen("empleado.dat","a");
    if (archivo !=  NULL) {
        fwrite(&empleado,sizeof(Empleado),1,archivo);
        fflush(archivo);  // vacia el buffer al archivo
        fclose(archivo);  // cierra el archivo
        return 1;
    } else {
        printf("No es posible crear el archivo...\n");
        return 0;
    }
}

void lectura(void) {
    Empleado empleado;
    FILE *archivo = fopen("empleado.dat","r");
    if (archivo !=  NULL) {
        //lectura de cada registro
        while (fread(&empleado,sizeof(Empleado),1,archivo) == 1) {
             printf("Nombre del empleado: %s\n",empleado.nombre);
             printf("Departamento: %s\n",empleado.departamento);
             printf("Edad: %d\n",empleado.edad);
             printf("Salario: $%.2f\n",empleado.salario);

        }
        fclose(archivo); // cerrar el archivo
    } else {
        printf("No es posible leer el archivo...\n");
    }
}

void buscarPosicion(int posicion) {
    Empleado empleado;
    FILE *archivo = fopen("empleado.dat","r");
    if (archivo !=  NULL) {
        /* *
         *  fseek => permite posicionarse en cierta área del archivo
         */
        if (fseek(archivo,posicion*sizeof(Empleado),SEEK_SET) != 0) {
            fread(&empleado,sizeof(Empleado),1,archivo);
            printf("Nombre del empleado: %s\n",empleado.nombre);
            printf("Departamento: %s\n",empleado.departamento);
            printf("Edad: %d\n",empleado.edad);
            printf("Salario: $%.2f\n",empleado.salario);
        } else {
            printf("Posicion no valida\n");
        }
    } else {
        printf("Error al abrir el archivo!");
    }
}

void eliminarPosicion(int posicion) {
    Empleado empleado;
    FILE *archivo     = fopen("empleado.dat","r");
    FILE *archivoTemp = fopen("empleado_temp.dat","w");
    if (archivo !=  NULL && archivoTemp !=  NULL) {
        int posicion_actual = 0;
        while (ftell(archivo)) {
            if (posicion_actual != posicion) {
                fseek(archivoTemp,posicion_actual *sizeof (Empleado),SEEK_SET);
                fread(&empleado,sizeof(Empleado),1,archivo);
                fwrite(&empleado,sizeof(Empleado),1,archivoTemp);
                posicion_actual += 1;
            }
        }
        fflush(archivoTemp);
        fclose(archivoTemp);
        fclose(archivo);
        remove("empleado.dat");
        rename("empleado_temp.dat","empleado.dat");
    } else {
        printf("Error al abrir el o los archivos!");
    }
}