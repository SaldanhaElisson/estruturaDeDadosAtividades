// 2) Palíndromo é uma palavra, frase ou número que permanece igual quando lida de trás para diante. Por extensão, 
// palíndromo é qualquer série de elementos com simetria linear, ou seja, que apresenta a mesma sequência de unidades nos dois sentidos. 
// (exemplos:  rotor, arara, etc.). Escreva um algoritmo recursivo que identifique se uma palavra é um palíndromo.

#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int isPalindromo(char[], int, int);

int main(void){

    char string1[SIZE] = "osso";
    int lenght = SIZE - 1;
    int result;

    result = isPalindromo(string1, lenght, 0);
    
    if(!result) {
        puts("\n A string é um Palíndromo!!!! :D ");
        return 0;
    }

      puts("A string não um Palíndromo :( ");

    return 0;
}

int isPalindromo(char string1[], int lenght, int index){

    int result;

    if(index > lenght){
        return 0;
    }
    
    result = isPalindromo(string1, lenght, index+1);
    
    // imprimir comparação entre os caracteres
    printf(" (%c == %c) ", string1[lenght - index], string1[index]);

    if(!(string1[lenght - index] == string1[index])){
        return 1;
    }

    return result;

    
}

