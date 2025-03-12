#include <stdio.h>

int main(void){
    int numbers[] = {1,2,3,4,5};
    int *ptr = numbers;

    for(int i = 0; i < 5; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");

    for(int i = 0; i < 5; i++){
        printf("%d", *(ptr+i));
    }
    return 0;
}