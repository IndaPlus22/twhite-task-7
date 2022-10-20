#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    char firstNames[n][20];
    char surNames[n][20];

    for (int i = 0; i < n; i++) {
        fgets(firstNames[i], 20, stdin);
        printf("%s", firstNames[i]);
    }
    for (int i = 0; i < n; i++) {
        fgets(surNames[i], 20, stdin);
        printf("%s", surNames[i]);
    }

    char duplicates[n][20];
    bool duplicateExists = false;
    int counter = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (firstNames[i] == firstNames[j]) {
                for (int k = 0; k < n; k++) {
                    if (duplicates[k] == firstNames[i]) {
                        duplicateExists == true;
                        break;
                    }
                    if (duplicateExists == false) {
                        duplicates[i] = firstNames[i];
                        counter++; 
                    }
                    break;
                }
            }
        }
    }

    printf("%d", counter);

    return 0;
}
    