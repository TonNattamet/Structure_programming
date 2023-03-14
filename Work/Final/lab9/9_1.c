#include <stdio.h>
#include <math.h>
struct point{
    int x;
    int y;
};
void cal(struct point[], int);
int main()
{
    int n;
    scanf("%d", &n);
    struct point points[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &points[i].x, &points[i].y);
    }
    cal(points, n);
}
void cal(struct point abc[], int n)
{
    float ds;
    for (int i = 0; i < n; i++)
    {
        if (abc[i].x > 0 && abc[i].y > 0)
        {
            printf("1\n");
        }
        else if (abc[i].x < 0 && abc[i].y > 0)
        {
            printf("2\n");
        }
        else if (abc[i].x < 0 && abc[i].y < 0)
        {
            printf("3\n");
        }
        else if (abc[i].x > 0 && abc[i].y < 0)
        {
            printf("4\n");
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ds = sqrt(pow(abc[j].x - abc[i].x, 2) + pow(abc[j].y - abc[i].y, 2));
            printf("%.2f\n", ds);
        }
    }
}