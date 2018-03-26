//Problema 3 comparar 2 cadenas de carecteres, y retorne un valor logico.


#include <iostream>

using namespace std;

bool compara_pala(char*str1, char*str2);

int main()
{   
    bool result;
    char str1[]={"Palabra"};
    char str2[]={"palabra"};
    result = compara_pala(str1,str2);
    if (result==true){
        cout<<"Son iguales "<<endl;
    }
    else if(result==false){
        cout<<"Son diferentes "<<endl;
    }
}

bool compara_pala(char *str1, char *str2){
    if(str1==str2){
        return true;
    }
    else{
        return false;
}
}
