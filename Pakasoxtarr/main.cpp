#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h> 
int main() {


    int items[] = { 1, 10, 4, 2, 0, 5, 3, 8, 9, 7 };
    int sum = 0;


    int sum0 = 0;
    int length = sizeof(items) / sizeof(items[0]);



    for (int i = 0; i < length; i++) {
        if (items[i] != 0)
            sum += items[i];
    }

    sum0 = length * (length + 1) / 2;
    printf("%d\n", sum0 - sum);
    return 0;
}
