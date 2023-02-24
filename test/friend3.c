// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {

//     int n, m;
//     int i, j;
//     int x, y;
//     scanf("%d %d", &n, &m);
//     int a[n][m], b[n][m];

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
//             b[i][j] = a[j][i];
//             // printf("%d ", b[i][j]);
//             // if (j == m -1){
//             //    printf("\n");
//         }
//     }

//     for (i = 0; i < n; i++)
//     {
//         for (j = 0; j < m; j++)
//         {
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#define pine = 3.14;
int main()
{

    // int n, m;
    // int i, j;
    // int x, y;
    // scanf("%d %d", &n, &m);
    // int a[n][m], b[n][m],c[n][m];

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         scanf("%d", &a[i][j]);
    //     }
    // }

    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         scanf("%d", &b[i][j]);
    //         c[i][j] = a[i][j] * b[i][j];
    //     }
    // }

    


    // for (i = 0; i < n; i++)
    // {
    //     for (j = 0; j < m; j++)
    //     {
    //         printf("%d ", c[i][j]);
    //     }
    //     printf("\n");
    // }

    float r,area;

    printf("input radius: ");
    scanf("%f", &r);
    area = (r*r) * 3.14;
    printf("area: %f",area);
    return 0;
}