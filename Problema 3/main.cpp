//Problema 3 comparar 2 cadenas de carecteres, y retorne un valor logico.


#include <iostream>

using namespace std;

int compara_pala(char*str1, char*str2);

int main()
{
    char str1[]={"Palabra"};
    char str2[]={"palabra"};
    compara_pala(str1,str2);

}

int compara_pala(char *str1, char *str2){
    if(str1==str2){
        cout<<"Son iguales "<<endl;
    }
    else{
        cout<<"Son diferentes "<<endl;
}
}

