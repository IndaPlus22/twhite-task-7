#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main() {
    int n = 0;
    int returnValueN = scanf("%d", &n);
    char names[n][20];
    char surNames[n][20];

    int returnValuesnames = 0;
    for (int i = 0; i < n; i++) {
        returnValuesnames += scanf("%s", names[i]);
    }
    int returnValuesSurNames = 0;
    for (int i = 0; i < n; i++) {
        returnValuesSurNames += scanf("%s", surNames[i]);
    }

    for (int i = 0; i < n; i++) {
        strcat(names[i], surNames[i]);
    }

    char duplicates[n][20];
    bool previousDuplicateFound = false;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        previousDuplicateFound = false;
        //Look for duplicates already found
        for (int j = 0; j < n; j++) {
            if (strcmp(duplicates[j], names[i]) == 0) {
                previousDuplicateFound = true;
                break;
            }
        }
        //If found move to next iteration
        if (previousDuplicateFound == true) {
            continue;
        }

        //Look for new duplicates.
        for (int k = i+1; k < n; k++) {
                if (strcmp(names[i], names[k]) == 0) {
                    strcpy(duplicates[i], names[k]);
                    counter++;                
                }
        }
    }

    printf("%d\n", n-counter);

    return 0;
}

