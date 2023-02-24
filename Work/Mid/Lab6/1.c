#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int count = 1, i, j;
    printf("Enter size of array : ");
    scanf("%d", &count);
    float input_array[count], total = 0, mean, sum, sd;
    for (i = 0; i < count; i++)
    {
        printf("Enter %d number : ", i + 1);
        scanf("%f", &input_array[i]);
        total += input_array[i];
    }
    mean = total / count;
    for (int i = 0; i < count; i++)
    {
        for (int j = i + 1; j < count; j++)
        {
            if (input_array[i] > input_array[j])
            {
                sum = input_array[i];
                input_array[i] = input_array[j];
                input_array[j] = sum;
            }
        }
    }
    total = 0;
    for (i = 0; i < count; i++)
    {
        sum = input_array[i] - mean;
        total = total + pow(sum, 2);
    }
    total = total / (count - 1);
    sd = sqrt(total);
    printf("Mean = %.3f \nMax = %.3f \nMin = %.3f \nS.D. = %.3f", mean,
           input_array[count - 1], input_array[0], sd);
    return 0;
}