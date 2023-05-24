#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Variables in C\n");
    // correct identifier names:
    /*
    int arena = 21; variable name can contain alphabets
    int s_count = 3; variable name can start with an underscore (_)
    int marks40 = 70; variable name can include a digit
    int class_one = 5; variable name can include an underscore (_)

    //invalid identifiers
    double 1stTest = 15; variable name cannot start with a digit
    double oh!God = 100; variable name cannot include an exclamation (!)
    double start...end = 0; variable name cannot contain ellipse (...)
    double int = 20; variable name cannot be a reserved keyword
    */

    int a;
    int b;
    int c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    c = a + b;
    printf("sum of %d and %d is : %d", a, b, c);
    return 0;
}
