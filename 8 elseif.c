#include<stdio.h>

int main(){
    int per = 87;

    if(per>=90){
        printf("Your per. %d and Grade A",per);
    }else if(per >= 80){
        printf("Your per. %d and Grade b",per);
    }else if(per >= 70){
        printf("Your per. %d and Grade c",per);
    }else if(per >= 60){
        printf("Your per. %d and Grade d",per);
    }else if(per >= 50){
        printf("Your per. %d and Grade e",per);
    }else if(per >= 40){
        printf("Your per. %d and Grade f",per);
    }else if(per >= 30){
        printf("Your per. %d and Grade g",per);
    }else{
        printf("Fail");
    }
}
