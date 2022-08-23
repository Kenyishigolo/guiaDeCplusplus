#include <iostream>

using namespace std;

int main()
{
    int tabla[12], multiplicador;
    
    // posicion inicial 0
    // posicion final 12
    // tabla[0]
    // 0  1  2  3  4  5  6  7  8  9  10 11
    // [],[],[],[],[],[],[],[],[],[],[],[]
    
    printf("Ingrese un numero por favor");
    scanf("%d",&multiplicador); //10
    
    //EN ESTE FOR - SE GUARDA LA TABLA DEL 12
    for(int i=0;i<12;i++)
    {
        tabla[i]= (i+1)*multiplicador;
    }
    
    //EN ESTE FOR - SE MUESTRAN LOS DATOS DE LA TABLA DEL 1 AL 12
    for(int i=0;i<12;i++)
    {
        printf("%d \t",tabla[i]);
        //printf("%d \t",multiplicador); ESTA FORMA NO ES CORRECTA
    }

    return 0;
}