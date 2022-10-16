#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void equat(double a,double b, double c)
{
    float formul = b * b - 4 * a * c;

    if(formul < 0)
    {
        printf("No real roots!\n");

        return;
    }

    float x1,x2;
    
    x1 = ( (-1 * b * b) + sqrt(formul) ) / 2 * a;
    x2 = ( (-1 * b * b) - sqrt(formul) ) / 2 * a;

    if(formul == 0)
    {
        printf("x1 = x2 = %f\n",x1);

        return;
    }

    printf("x1 = %f\tx2 = %f\n",x1,x2);
}

int main(int argc, char** argv)
{
    if(argc < 4)
    {
        printf("Quadratic equations solver 0.1\n");
        printf("Usage: solv <a> <b> <c>\n");

        return 0;
    }

    float a,b,c;
    a = atof(argv[1]);
    b = atof(argv[2]);
    c = atof(argv[3]);

    equat(a,b,c);

    return 0;
}
