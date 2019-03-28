#include"calci.h"
double calcu(char op,double N1,double N2)
{
 double result;
    switch(op)
    {
        case '+':
            result=N1+N2;
            break;

        case '-':
            result=N1-N2;
            break;

        case '*':
            result=N1*N2;
            break;

        case '/':
            if (N2==0)
            {
             printf("invalid input");
              break;
            }
            else
            {
                result=N1/N2;
            break;
            }
         default:
            printf("Error! operator is not correct");
    }
//printf("%f",result);
    return result;
}
