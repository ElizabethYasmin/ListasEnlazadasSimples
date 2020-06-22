#include <iostream>

#include "list.h"
#include "list.cpp"

using namespace std;

int main()
{
    List<int> lista;
    
    int ele;

    int dim;
    int pos;
    
    //string file_with_list;
	int opc;
    do {
        cout << "MENU" << endl;
        cout << "1.Insertar" << endl;
        cout << "2.Quitar por dato" << endl;
        cout << "3.Quitar por posicion" << endl;
        cout << "4.Imprimir" << endl;
        cout << "Seleccione opcion->";cin >> opc;

        switch (opc)
        {
        case 1:cout << "Insertar un elemento->";
            cin >> ele;
		    lista.add_sort(ele);
		    //lista.print();
            system("pause");
            break;
        case 2:cout << "Elimina un elemento por dato: " << endl;
		    cin >> ele;
		    lista.del_by_data(ele);
		    //list_1.print();
            system("pause");
            break;
        case 3:cout << "Elimina un elemento por posicion: " << endl;
		    cin >> pos;
		    lista.del_by_position(pos);
		    //list_1.print();
            system("pause");
            break;
		case 4:cout << "Imprimir: " << endl;
		    lista.print();
            system("pause");
            break;
        }
        system("cls");
    } while (opc != 5); 
	return 0;
}



