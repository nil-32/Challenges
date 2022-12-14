#include <string.h>
#include "stdio.h"


int main() {
    char sentence[600];
    char vowel[] = {'a', 'e', 'i', 'o', 'u'};
    int counter = 0;
    printf("Enter a sentence(without using lowercase letters and Turkish characters): ");
    scanf("%[^\n]s", sentence); //%[^\n] can be used as an alternative of gets.
    printf("Your sentence is: %s", sentence);

    if (strlen(sentence) > 600) {
        printf("You entered a very long sentence!.");
    } else {
        for (int i = 0; i < strlen(sentence); i++) {
            for (int j = 0; j < 5; j++) {
                if (sentence[i] == vowel[j]) {
                    counter++;
                }
            }
        }
    }
    printf("\nThere are %d vowels in the entered sentence", counter);


    return 0;
}
