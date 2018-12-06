#include <stdio.h>

int mult(int N){
    int sum = 0;
    for (int i = 0; i < N; i++){
        if (i % 3 == 0 || i % 5 == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int main(void){
    int sum = 0;
    sum = mult(1000);
    printf("sum: %d", sum);
}