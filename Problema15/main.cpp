#include <iostream>

using namespace std;

int main()
{
    int A[4], B[4], C[4];

    for (int i=1 ; i<=2 ; i++){

        cout << "Ingrese los datos para el rectangulo " << i << " : " << endl;  //Aqui se guarda la iformacion de los 2 rectangulos

        if ( i==1 ){
            for (int j=0 ; j<4 ; j++){

                cin >> A[j];
            }
        }
        else if ( i == 2){
            for (int j=0 ; j<4 ; j++){

                cin >> B[j];
            }
        }
    }

    if ( (A[0]+A[2])>B[0] && A[0]<B[0]){                        //Se verifica si los rectangulos se tocan
                                                                //Se guarda el vertice de la inteseccion de los rectangulos
        C[0]=B[0];
        C[2]=A[2]-B[0];
    }
    else if ( (B[0]+B[2])>A[0] && B[0]<A[0]){                   //En este se verifica si A o B estan antes o despues

        C[0]=A[0];
        C[2]=B[2]-A[0];
    }
    else{
        cout << "No se intersectan los rectangulos." << endl;
        exit(0);
    }

    if ( (A[1]+A[3])>B[1] && A[1]<B[1]){                        //Se guarda en el arreglo los valores de la inteseccion
                                                                //Sumando a los valores iniciales el largo y el ancho de los rectangulos
        C[1]=B[1];
        C[3]=A[3]-B[1];
    }
    else if ( (B[1]+B[3])>A[1] && B[1]<A[3]){

        C[1]=A[1];
        C[3]=B[3]-A[1];
    }
    else{
        cout << "No se intersectan los rectangulos." << endl;
        exit(0);
    }

    cout << "El rectangulo de interseccion quedaria expresado como: " << endl;          //Imprime las dimensiones y corrdenadas de la intersección
    for (int i=0 ; i<4 ; i++){
        cout << C[i] <<"  ";
    }

    return 0;
}
