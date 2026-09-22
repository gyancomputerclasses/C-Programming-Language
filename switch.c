#include <stdio.h>

int main() {

    int a = 5, b = 8, value=4, result;
    switch(value){
        case 1:
        result = a + b;
        printf("%d + %d = %d", a, b, result);
        break;
        case 2: 
        result = a - b;
        printf("%d - %d = %d", a, b, result);
        break;
        case 3: 
        result = a * b;
        printf("%d * %d = %d", a, b, result);
        break;
        case 4: 
        result = b / a;
        printf("%d / %d = %d", b, a, result);
        break;
    }
}
