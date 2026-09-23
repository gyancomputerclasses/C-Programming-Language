#include <stdio.h>

int main() {
    float num1, num2, result;
    int input;
    printf("----------------Welcome of GCC Calculator---------------");
    start:
    printf("\nselect calculator option");
    printf("\nAdd : 1\n Sub : 2 \n mul. : 3\n divide 4\n");
    printf("Typing number here : ");
    scanf("%d",&input);
    switch(input){
        case 1:
        printf("\n Sum of two number");
        printf("\n Input first Number : ");
        scanf("%f",&num1);
        printf("\n Input Second Number : ");
        scanf("%f",&num2);
        result = num1 + num2;
        printf("\n %f+ %f = %f",num1, num2, result);
        goto start;
        case 2:
        printf("\n sub of two number");
        printf("\n Input first Number : ");
        scanf("%f",&num1);
        printf("\n Input Second Number : ");
        scanf("%f",&num2);
        result = num1 - num2;
        printf("\n %f- %f = %f",num1, num2, result);
        goto start;
        case 3:
            printf("\n mul of two number");
        printf("\n Input first Number : ");
        scanf("%f",&num1);
        printf("\n Input Second Number : ");
        scanf("%f",&num2);
        result = num1 * num2;
        printf("\n %f * %f = %f",num1, num2, result);
        goto start;
        case 4:
        printf("\n Divide of two number");
        printf("\n Input first Number : ");
        scanf("%f",&num1);
        printf("\n Input Second Number : ");
        scanf("%f",&num2);
        result = num1 / num2;
        printf("\n %f / %f = %f",num1, num2, result);
        goto start;
    }
}
