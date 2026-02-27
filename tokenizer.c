#include <stdio.h>
#include <string.h>
int main(){
    FILE *file;
    file = fopen("input.txt","r");

    char file_text[100];

    char keyword[20][100] = {"include", "<stdio.h>", "int", "char", "main", "printf", "return"};

    if(file  == NULL){
        printf("File is empty or does not exists.\n");
    }

    else{
        while(fgets(file_text, 100, file)){
            printf("%s",file_text);
        }
    }
    fclose(file);
    return 0;

}
