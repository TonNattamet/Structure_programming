#include <stdio.h>
#include <stdlib.h>
int main()
{
    float radius, area;
    printf("Please input radius : ");
    scanf("%f ", &radius);
    area = 22 / 7 * radius * radius;
    if (area <= 300)
        printf("%f small\n", area);
    else
        printf("%f large\n", area);
    system("PAUSE");
    return 0;
}