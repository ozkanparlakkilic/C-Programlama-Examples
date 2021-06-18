#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct Complex_
{
    int imaginary;
    int real;

}Complex;

void ComplexSum(Complex arr[], int size, Complex* sum)
{
    int i,j;
    for(i = 0; i < size; i++)
        {
            sum->real = sum->real + arr[i].real;
        }
    for(j = 0; j < size; j++)
        {
            sum->imaginary = sum->imaginary + arr[j].imaginary;
        }
}

int main() {

    Complex cmpArr[3];
    cmpArr[0].imaginary = 4;
    cmpArr[0].real = 2;
    cmpArr[1].imaginary = 3;
    cmpArr[1].real = 6;
    cmpArr[2].imaginary = 9;
    cmpArr[2].real = 21;
    Complex sum;
    sum.real = 0;
    sum.imaginary = 0;
    ComplexSum(cmpArr,3,&sum);
    printf("Sum : %d + %di",sum.real,sum.imaginary);

    return 0;
}