//Problema 7 El usuario debe ingresar una cadena de caracteres y se debe retornar la cadena de caracteres pero sin caracteres repetidos


#include <iostream>

using namespace std;
void quit_let( string x);

int main()
{


    string x;
    cout<< "Ingrese una palabra: " << endl;
    cin>>x;
    quit_let(x);

    return 0;

}
void quit_let(string x){
    int c=0;
    char a[x.size()]="";
    for (unsigned int i=0 ; i<=(x.size()); i=i+1){ //unsigned es para que no me tome valores negativos
        for(int k=0; k<=c; k=k+1){                 //En los for se van recorriendo tanto el string como el arreglo vacio
            if(x[i]==a[k]){                        //Si la letra ya esta en el arreglo se rompe el ciclo y se mueve aotra letra de la cadena

                break;}
            else if(k==c){                          //c es el espacio del arreglo y si es igual a k significa que la palabra no esta repetida
                a[c]=x[i];
                c=c+1;
                break;}
        }
    }
    cout<<"La cadena original es: "<<x<<"La cadena sin caracteres es: "<<a<<endl;
}
