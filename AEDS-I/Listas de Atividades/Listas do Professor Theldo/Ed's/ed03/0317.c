#include "io.h"
#include "Giuseppe.h"

int main() {

    clear();
    id("exemplo 0317 - Programa - v0.0");

    int a, b, numVezes, multiplos5[numVezes], cont=0;
    a = readint("qual e o valor inicial do intervalo: ");
    b = readint("qual e o valor  final do intervalo: ");
    numVezes = readint("quantos numeros a serem lidos: ");

    for (int i = 0; i < numVezes; i++)
    {
        multiplos5[i]= readint("qual e o valor que vc quer ler: ");
    }
    
    for (int i = 0; i < numVezes; i++)
    {
        if (multiplos5[i]%5==0 and (a<=multiplos5[i] and multiplos5[i]<=b))
        {
            print("o numero [%d] e multiplo de 5 e pertence ao intervalo [%d,%d]\n", multiplos5[i],a, b);
            cont++;
        }
    }
    print("apareceu [%d] vezes\n",cont);

    pause ( "Apertar ENTER para terminar" );
    clear();
    return 0;
}