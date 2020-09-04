#include <iostream>
using namespace std; //se pone para usar el cout

int main() {
    cout << "***************************************************************"<<endl; //endl da un salto de linea
    cout << "* USAC                                                        *"<<endl;
    cout << "* Estructura de datos                                         *"<<endl;
    cout << "* Seccion A                                                   *"<<endl;
    cout << "* Cristian Jonatan Caceres Gonzalez                           *"<<endl;
    cout << "* 201801183                                                   *"<<endl;
    cout << "***************************************************************"<<endl;
    system("pause"); //Para detectar teclazo

    cout << "1.Ver Proyectos"<<endl;
    cout << "2.Editar Proyectos"<<endl;
    cout << "3.Cargar Proyecto"<<endl;
    cout << "4.Graficar Proyectos"<<endl;
    cout << "5.Guardar Proyectos"<<endl;
    cout << "6.Cargar Librerias"<<endl;
    cout << "7.Salir"<<endl;
    cout << "Elija una opcion: ";

    int opc; //Declarando variable opcion
    cin>>opc; //Para recibir la variable opc

     //Este es un ciclo para repetir algo

        switch (opc) { //Aqui se coloca el nombre de la variable de opciones
            case 1:
                cout << "Usted abrio la opcion Ver proyectos";
                return 0;
            case 2:
                cout << "Usted abrio la opcion Editar Proyectos";
                return 0;
            case 3:
                cout << "Usted abrio la opcion Cargar proyectos";
                return 0;
            case 4:
                cout << "Usted abrio la opcion Graficar proyectos";
                return 0;
            case 5:
                cout << "Usted abrio la opcion Guardar proyectos";
                return 0;
            case 6:
                cout << "Usted abrio la opcion Cargar proyectos";
                return 0;
            case 7:
                cout << "Esperamos volverlo a ver";
                break;
        }

        //Chepe te presta

        //CHepe te presta x2

        //Chepe te presta x3

    return 0;

}
