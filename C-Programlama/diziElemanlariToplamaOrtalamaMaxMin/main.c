#include <stdio.h>
#include <stdlib.h>

int sum(int arr[], int size)
{
    int result;
    int i;
    result = arr[0];
    for(i = 1; i < size; i++)
        {
            result = result + arr[i];
        }
    return result;

}

float avg(int arr[], int size)
{
    float avg;
    float sum;
    int i;
    sum = arr[0];
    for(i = 1; i < size; i++)
        {
            sum = sum + arr[i];
        }
    avg = sum / size;
    return avg;



}

int max(int arr[], int size)
{
    int result;
    int i;
    result = arr[0];
    for(i = 1;i < size; i++)
        {
            if(result < arr[i])
                {
                    result = arr[i];
                }
        }
    return result;
}

int min(int arr[], int size)
{
    int result;
    int i;
    result = arr[0];
    for(i = 1;i < size; i++)
        {
            if(result > arr[i])
                {
                    result = arr[i];
                }
        }
    return result;
}

int main()
{
    int myArr[7] = {2,6,9,11,3,7,1};
    int userArr[5];
    int i;
    for(i = 0; i < 5;i++)
        {
            printf("Please enter a number: ");
            scanf("%d",&userArr[i]);
        }

    printf("My Array\n");
    printf("Sum of the Array is %d\n",sum(myArr,7));
    printf("Average of the Array is %f\n",avg(myArr,7));
    printf("Max element of the Array is %d\n", max(myArr,7));
    printf("Min element of the Array is %d\n", min(myArr,7));

    printf("---------------------------------------------------\n");

    printf("Your Array\n");
    printf("Sum of the Array is %d\n",sum(userArr,5));
    printf("Average of the Array is %f\n",avg(userArr,5));
    printf("Max element of the Array is %d\n", max(userArr,5));
    printf("Min element of the Array is %d\n", min(userArr,5));

    return 0;
}