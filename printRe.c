#include <stdio.h>


void forAstar(){

    printf("{ Epsilon, ");
    for(int i = 9; i>=0; i--){
        for(int j = i; j<10; j++){

            printf("a");
        }

        if(i==0){
        printf(", ...}\n");
        }
        else{
        printf(", ");
        }
    }

}

void forAstarBplus(){
    printf("{ ");
    for(int i = 0; i<5; i++){
        for(int j = i; j<5; j++){
            for(int count = 0; count < i; count++){
                printf("a");
            }
            for(int counter = 0; counter < j; counter++){
                printf("b");
            }

            printf(", ");

        }
    }
    printf(" ...}\n");
}


int main(){

    forAstar();
    forAstarBplus();
    return 0;
}
