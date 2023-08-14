#include <stdio.h>
#include <stdlib.h>
//1) Faça uma função recursiva que inverta os elementos de um vetor.
#define SIZE 9
void invertArray(const int[], int[], int, int);


int main(void){
    int arrayOrigin[SIZE] = {45, 10, 20, 60, 90, 100, 90, 108, 70};
    int arrayInverted[SIZE] = {0};
    
    invertArray(arrayOrigin, arrayInverted, 0, (SIZE - 1));

    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arrayInverted[i]);
    }
    
    return 0;
}

void invertArray(const int arrayOrigin[], int arrayInverted[], int index, int arrayLenght){
 
  
    arrayInverted[index] = arrayOrigin[arrayLenght - index];

      if(index == (arrayLenght)){
        return;
    }

    invertArray(arrayOrigin, arrayInverted, index + 1, arrayLenght);

   
}