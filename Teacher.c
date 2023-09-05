// TEACHER
//A TEACHER PATTERN
#include <stdio.h>

int main() {
    int i, j;
    int height = 7; 

    char letters[] = "TEACHER"; 

    for (i = 0; i < height; i++) {
        for (int k = 0; k < 7; k++) {
            char currentChar = letters[k];
            for (j = 0; j < height; j++) {
                if (currentChar == 'T') {
                    if (i == 0 || j == height / 2)
                        printf("T");
                    else
                        printf(" ");
                } else if (currentChar == 'E') {
                    if (i == 0 ||i==3|| i == height - 1 || j == 0)
                        printf("E");
                    else
                        printf(" ");
                } else if (currentChar == 'A') {
                    if (i == 0 || j == 0 || j == height - 1 || i == height / 2)
                        printf("A");
                    else
                        printf(" ");
                } else if (currentChar == 'C') {
                    if (i == 0 || i == height - 1 || j == 0)
                        printf("C");
                    else
                        printf(" ");
                } else if (currentChar == 'H') {
                    if (j == 0 || j == height - 1 || i == height / 2)
                        printf("H");
                    else
                        printf(" ");
                } else if (currentChar == 'R') {
                    if  (j == 0 || (i == 0 && j < height - 2) || (i == height / 2 && j < height / 2) || (j == i && j >= height / 2)||(j==4&&i==1)||(j==4&&i==2))
                        printf("R");
                    else
                        printf(" ");
                }
            }
            printf("  "); 
        }
        printf("\n");
    }

    return 0;
}
