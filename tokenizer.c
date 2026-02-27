#include <stdio.h>
#include <string.h>
int main(){

    FILE *file;
    file = fopen("input.txt","r");

    char file_text[100];

    char preproccesor[10][10] = {"#include"};

    char headerfile[10][10] = {"<stdio.h>", "<string.h>", "<math.h>"};

    char identifier[50][100] = {"main", "printf"};

    char keyword[10][50] = {"int", "char", "return"};

    char punctuation[50] = {'(', ')', '{', '}',';'};

    if(file  == NULL){
        printf("File is empty or does not exists.\n");
    }
    
    else{
        while(fgets(file_text, 100, file)){
           //printf("%s",file_text);
            // for(int i=0; file_text[i] != '\0'; i++){
                //printf("%c",file_text[i]);
                
                char *word = strtok(file_text, " \t\n\"(){},;\'<>");
                while( word!= NULL){
                    printf("%s\n",word);
                }
                
                
            //}
        }
    }
    fclose(file);
    return 0;

}
