#include <iostream>

using namespace std;

int main()
{
    //char arr[15][20]={{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",},{"-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-",}};
    int arr[15][20]={{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};
    int fila,colum,opcion,as;
    cout<<"Ingrese 1 para entrar: "<<endl;          //arreglo de dos dimensiones columnas y filas
    cin>>as;
    while(as==1){

    cout<<"1.Ver asiento disponbiles, 2.Realizar una reserva,3.Salir"<<endl;
    cin>>opcion;
    if(opcion==1){
        cout<<"1 = acientos disponibles"<<endl;
        cout<<endl;                                                //imprime los acientos disponibles
        for(int i=0;i<=14;i++){
            for(int k=0;k<=19;k++){
                cout << arr[i][k]<<"  ";
        }
        cout<<endl;
    }
    }
        else if(opcion==2){
            cout<<"Ingrese el numero del asiento que desea reservar: "<<endl;
            cin>>fila;
            cout<<"Ingrese el numero del asiento de la columna que desea resrvar: "<<endl;
            cin>>colum;
            *(*(arr+(fila-1))+(colum-1))= 0;                //se resta 1 porque el arreglo empieza desde una pocision 0

}
    else if(opcion==3){
            break;

    }
    }
}
