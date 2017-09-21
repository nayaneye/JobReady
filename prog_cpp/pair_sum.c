#include <stdio.h>

int main() {

    int sum = 10;
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int i,j;
    for(i=0; i<10;i++) {
        for(j=0;j<10;j++) {
            if(sum == arr[i] + arr[j]) {
                printf("i: %d, j: %d\n",i,j);
            }
        }
    }

    return 0;
}
