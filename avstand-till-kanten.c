#include <stdio.h>
#include <stdlib.h>

int main() {

    int r, k = 0;
    scanf("%d %d", &r, &k);

    int arr[r][k];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < k; j++) {
            if (i+1 > r/2) {
                if (j+1 > k/2) {
                    if (r-i >= k-j) {
                        arr[i][j] = k-j;
                    }
                    else {
                        arr[i][j] = r-i;
                    }        
                } 
                else {
                    if (j+1 > r-i) {
                        arr[i][j] = r-i;
                    }
                    else {
                        arr[i][j] = j+1;
                    }
                }
            }
            else {
                if (j+1 > k/2) {
                    if (i+1 > k-j) {
                        arr[i][j] = k-j;
                    }
                    else {
                        arr[i][j] = i+1;
                    }
                }
                else {
                    if (i > j) {
                        arr[i][j] = j+1;
                    }
                    else {
                        arr[i][j] = i+1;
                    }
                }
            }
            if (arr[i][j] > 9) {
                printf(".");
            }
            else if (j == k-1) {
                printf("%d\n", arr[i][j]);
            }            
            else {
                printf("%d", arr[i][j]);
            }
        }
    }
}
