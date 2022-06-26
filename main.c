//Operators in C programming language
#include <stdio.h>

int main() {

    int a = 2,b = 4, result;

    //Arithmetic operators in C
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

    //Assignment Operator in C
    //(=) Assignment operator
    int x = 10;
    printf("Value of x using (=) assignment operator is %d\n", x);
    //(+=) Assignment operator
    x += 5;
    printf("Value of x using (+=) assignment operator is %d\n", x);
    //(-=) Assignment operator
    x -= 5;
    printf("Value of x using (-=) assignment operator is %d\n", x);
    //(*=) Assignment operator
    x *= 5;
    printf("Value of x using (*=) assignment operator is %d\n", x);
    //(/=) Assignment operator
    x /= 5;
    printf("Value of x using (/=) assignment operator is %d\n", x);
    x %= 4;
    //(%=) Assignment operator
    printf("Value of x using (%=) assignment operator is %d\n", x);

    //Comparing Operators in C
    //(==) Comparing operator
    int y = 10; int z = 20;
    printf("y == z: (%d) == (%d) always false (%d)\n", y, z, y == z);
    z = 10;
    printf("y == z: (%d) == (%d) always true (%d)\n", y, z, y == z);


    return 0;
}
