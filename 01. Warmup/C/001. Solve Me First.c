#include <stdio.h>

int solveMeFirst(int a, int b) {
    return a+b;
}

int main() {
    int num1,num2,sum;
    scanf("%d %d",&num1,&num2);
    
    sum = solveMeFirst(num1,num2);
    printf("%d",sum);
    
    return 0;
}
