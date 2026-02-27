#include <stdio.h>
#include <string.h>

int main() {

    //char str[] = "int x = 10; // First comment \n x++; /* Multi-line \n comment having also line break */// Second one";
    char str[] = "// comment one \n sdsdfsdhvxb vmxcbvrkhdvf // comment two";
    int n = 0;
    for(int i = 0; str[i] != '\0'; i++){
        n++;
    }

    for (int i = 0; i < n; i++) {


        if (str[i] == '/' && str[i + 1] == '/') {
            printf("Single-line comment: ");

            while (i < n && str[i] != '\n') {
                printf("%c", str[i]);
                i++;
            }
            printf("\n");
        }

        else if (str[i] == '/' && str[i + 1] == '*') {
            printf("Multi-line comment: ");

            printf("%c%c", str[i], str[i+1]);
            i += 2;


            while (i < n - 1) {
                printf("%c", str[i]);
                if (str[i] == '*' && str[i + 1] == '/') {
                    printf("%c", str[i+1]);
                    i++;
                    break;
                }
                i++;
            }
            printf("\n");
        }

    }

    return 0;
}
