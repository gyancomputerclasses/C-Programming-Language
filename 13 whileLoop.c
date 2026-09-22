#include<stdio.h>
int main(){
    int table=5, value=1, multi;
    while(value<=10){
        multi = table * value;
        printf("%d x %d = %d \n",table, value,multi);
        value++;
    }
}
