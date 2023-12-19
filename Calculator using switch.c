#include <stdio.h>
#include <conio.h>

int main()
{
    float a,b;
    char c;
    scanf("%f %c %f",&a, &c, &b);

    /*switch(c)
    {
        case'+':
        printf("%f+%f=%f",a,b,a+b);
        break;

        case'-':
        printf("%f-%f=%f",a,b,a-b);
        break;

        case'*':
        printf("%f*%f=%f",a,b,a*b);
        break;

        case'/':
        printf("%f/%f=%f",a,b,a/b);
        break;

        // c doesn't match any case(+, -, *, /)
        default:
        printf("Error! Operation is not correct");
    }*/
        switch(c)
    {
        case'+':
        printf("The result is: %f",a+b);
        break;

        case'-':
        printf("The result is: %f",a-b);
        break;

        case'*':
        printf("The result is: %f",a*b);
        break;

        case'/':
        printf("The result is: %f",a/b);
        break;

        default:
        printf("Error!!!");
    }
    return 0;
}
