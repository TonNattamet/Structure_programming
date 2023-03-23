#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n, m;
    int i, j;
    
    scanf("%d %d", &n, &m);
    int a[n][m], b[n][m];

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            b[i][j] = a[j][i];
            // printf("%d ", b[i][j]);
            // if (j == m -1){
            //    printf("\n");
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #define pine = 3.14;
// int main()
// {

//     int n, m;
//     int i, j;
//     int x, y;
//     scanf("%d %d", &n, &m);
//     int a[n][m], b[n][m],c[n][m];

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             scanf("%d", &b[i][j]);
//             c[i][j] = a[i][j] * b[i][j];
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }

//     // float r,area;

//     // printf("input radius: ");
//     // scanf("%f", &r);
//     // area = (r*r) * 3.14;
//     // printf("area: %f",area);
//     // return 0;
// }

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     int n, i, j;

//     scanf("%d", &n);
//     int num[10];
//     int sum = 0,total=0;
//     int min = 0, max = 0;
//     float sd = 0, mean = 0;

//     for (i = 0; i < n; i++)
//     {
//         printf("Enter element %d: ", i+1);
//         scanf("%d", &num[i]);
//         if (i == 0)
//         {
//             min = num[i];
//             max = num[i];
//         }
//         else
//         {
//             if (num[i] < min)
//             {
//                 min = num[i];
//             }
//             if (num[i] > max)
//             {
//                 max = num[i];
//             }
//         }
//         sum = sum + num[i];
//     }

//     mean = (float)sum / n;

//     for(i=0;i<n;i++){
//         sum = num[i]-mean;
//         total = total + pow(sum,2);

//     }

//     total = total/(n-1);
//     sd = sqrt(total);
//     printf("sum:%d\n", sum);
//     printf("min:%d\n", min);
//     printf("max:%d\n", max);
//     printf("mean:%f\n", mean);
//     printf("sd:%f\n", sd);

//     return 0;
// }

