//Operators in C programming language
#include <stdio.h>

int main() {
    //Arithmetic operators in C
    int a = 2,b = 4, result;
    //(+) Arithmetic operator
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);
    //(-) Arithmetic operator
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    //(*) Arithmetic operator
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    //(/) Arithmetic operator
    result = a / b;
    printf("%d / %d = %d\n", a, b, result);
    //(%) Arithmetic operator
    result = a % b;
    printf("[%d] % [%d] = %d\n", a, b, result);
    //(++) Arithmetic operator
    result = a++ + b++;
    printf("%d + %d = %d\n", a++, b++, result);
    //(--) Arithmetic operator
    result = a-- + b--;
    printf("%d - %d = %d\n", a--, b--, result);
    return 0;
}
