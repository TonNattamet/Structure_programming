// // #include <stdio.h>

// // int main()
// // {

// //     int a, n[a], i, j;
// //     int min, max, mean, sum;
// //     printf("input");
// //     scanf("%d", &a);
// //     for (i = 0; i < a; i++)
// //     {

// //         scanf("%d", &n[i]);
// //         if (i == 0)
// //         {
// //             min = n[i];
// //             max = n[i];
// //         }
// //         else
// //         {
// //             if (n[i] < min)
// //             {
// //                 min = n[i];
// //             }
// //             if (n[i] > max)
// //             {
// //                 max = n[i];
// //             }
// //         }

// //         sum += n[i];
// //     }

// //     mean = (float)sum / a;

// //     printf("Minimum: %d\n", min);
// //     printf("Maximum: %d\n", max);
// //     printf("Mean: %.2f\n", mean);

// //     return 0;
// // }

// #include <stdio.h>
// #include <math.h>
// int main() {
//     int n, i;
//     int numbers[100], min, max, sum=0;
//     int mean=0,sd=0;

//     // printf("Enter the number of elements: ");
//     scanf("%d", &n);//5

//     // read the numbers and update min, max, and sum
//     for (i = 0; i < n; i++) {//5
//         // printf("Enter element %d: ", i+1);
//         scanf("%d", &numbers[i]);

//         if (i == 0) {
//             min = numbers[i];
//             max = numbers[i];
//         } else {
//             if (numbers[i] < min) {
//                 min = numbers[i];
//             }
//             if (numbers[i] > max) {
//                 max = numbers[i];
//             }
//         }

//         sum = sum + numbers[i];
//     }

//     mean = sum / n;
//     sd = pow(n-mean,2)/n-1;

//     printf("Minimum: %d\n", min);
//     printf("Maximum: %d\n", max);
//     printf("Mean: %d\n", mean);
//     printf("sd: %d\n", sd);

//     //(x-xbar)^2/n-1
//     return 0;
// }



#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    int numbers[100], sum = 0, min, max;
    float mean, sd,total;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // read the numbers and update min, max, sum, and sum_of_squares
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &numbers[i]);

        if (i == 0) {
            min = numbers[i];
            max = numbers[i];
        } else {
            if (numbers[i] < min) {
                min = numbers[i];
            }
            if (numbers[i] > max) {
                max = numbers[i];
            }
        }

        sum = sum + numbers[i];
        // sum_of_squares += numbers[i] * numbers[i];
    }

    mean = (float) sum / n;
    // sd = sqrt((sum_of_squares - (sum * sum / n)) / (n - 1));
     for (i = 0; i < n; i++)
    {
        sum = numbers[i] - mean;
        total = total + pow(sum, 2);
    }
    total = total / (n - 1);
    sd = sqrt(total);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Mean: %.2f\n", mean);
    printf("Standard Deviation: %.2f\n", sd);

    return 0;
}
