#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
void shuffle(char* array, int length) {
    srand(time(NULL));
    for (int i = length - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        char temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    char key[] = "abcdefghijklmnopqrstuvwxyz";
    int keyLength = strlen(key);

    shuffle(key, keyLength);
    
    printf("%s", key);
    printf("Enter some text: ");
    char text[100];  
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0';  

    char result[100];
    for (int i = 0; i < strlen(text); i++) {
        char temp = text[i];
        for (int j = 0; j < strlen(text); j++) {
            if (temp == text[j] && i != j) {
                text[j] = key[i];
            }
        }
        result[i] = key[i];
    }
    result[strlen(text)] = '\0';

    printf("\nEncrypted text: %s\n", result);

    return 0;
}
