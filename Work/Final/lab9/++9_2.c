#include <stdio.h>
#include <math.h>
struct vector3D
{
    float x;
    float y;
    float z;
};
void cal(struct vector3D[], int);
int main()
{
    int n;
    scanf("%d", &n);
    struct vector3D vector[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%f %f %f", &vector[i].x, &vector[i].y,&vector[i].z);
    }
    cal(vector, n);
}
void cal(struct vector3D abc[], int n)
{
    
    float k;
    for (int i = 0; i < n; i++)
    {
        k = sqrt(pow(abc[i].x, 2) + pow(abc[i].y, 2) + pow(abc[i].z, 2));
            printf("%.2f\n", k);
    }
}
