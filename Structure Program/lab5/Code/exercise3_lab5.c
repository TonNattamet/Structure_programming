#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,sc[3] = {0,0,0};
    float time[10];
    char runner_id[10][10];
    while (i < 10)
    {
        printf("Enter %d ID runner : ",i+1);
        scanf("%s",runner_id[i]);fflush(stdin);
        printf("Enter time (s) : ");
        scanf("%f",&time[i]);
    if (time[i] <= 0 && time[i] >20)
    {
        printf("Error time\n");
    }
    else{
    i += 1;
    }
    }
    for (i=0;i<10;i++)
    {
        if (time[i] < time[sc[0]])
        {
            sc[2] = sc[1];
            sc[1] = sc[0];
            sc[0] = i;
        }
        else if (time[i] < time[sc[1]])
        {
            sc[2] = sc[1];
            sc[1] = i;
        }
        else if (time[i] < time[sc[2]])
        {
            sc[2] = i;
        }
    }
    printf("\nNo. ID time\n");
    for (i=0;i<3;i++)
    {
        printf("%2d %10s %-.2f\n",i+1,runner_id[sc[i]],time[sc[i]]);
    }
    return 0;
}
