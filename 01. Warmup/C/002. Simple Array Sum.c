#include <stdio.h>

int simpleArraySum(int ar_count, int* ar) {
    int sum = 0;
    for (int i=0; i<ar_count; i++){
        sum = sum + ar[i];
    }
    return sum;
}

int main(){
    int arr_length;
    scanf("%d",&arr_length);
    
    int arr[arr_length];
    for (int i=0; i<=arr_length; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("%d",simpleArraySum(arr_length, arr));
}