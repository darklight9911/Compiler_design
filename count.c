#include <stdio.h>
#include <string.h>
#include <ctype.h>

int vowel_count(char str[]){
    int vowel = 0;
    for(int i = 0; str[i] != '\0'; i++){
        char c = tolower(str[i]);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowel ++;
        }
    }
    return vowel;
}

int consonent_count(char str[]){
    int consonent = 0;
    for(int i = 0; str[i] != '\0'; i++){
        char c = tolower(str[i]);
        if( (c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')){
            consonent++;
        }
    }
    return consonent;
}

int digit_count(char str[]){
    int digit = 0;
    for(int i = 0; str[i] != '\0'; i++){
        char c = tolower(str[i]);
        if( c >= '0' && c <= '9'){
                digit++;
            }
        }
        return digit;   
}

int main(){
    char str[200] = "Count vowel and consonent also check if any 0-9 digit is here !";
    int length = 0;
    for(int i = 0; str[i] != '\0'; i++){
        length++;
    }
    printf(" Total Length: %d \n",length);
    printf(" Total Vowel Count: %d \n",vowel_count(str));
    printf(" Total Consonent Count: %d \n",consonent_count(str));
    printf(" Total Digit Count: %d \n\n",digit_count(str));
    return 0;
}