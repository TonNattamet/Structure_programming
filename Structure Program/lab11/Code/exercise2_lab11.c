#include<stdio.h>
#include<math.h>

int main()
{
    int n,dis=0,i,j,k=0;
    scanf("%d",&n);
    for(i=n-1;i>=0;i--)
    {
        dis = dis + i;
    }
    float points[n][3],distance[dis],temp;

    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%f",&points[i][j]);
        }
    }


    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            distance[k] = sqrt(pow(points[i][0]-points[j][0],2)+pow(points[i][1]-points[j][1],2)+pow(points[i][2]-points[j][2],2));
            k++;
        }
    }

    for(i=1;i<dis;i++)
        {
        temp = distance[i];
        for(k=i-1; k >= 0 && distance[k]<temp; k--)
            {
            distance[k + 1] = distance[k];
            }
        distance[k+1] = temp;
        }

    printf("%.2f\n%.2f\n%.2f",distance[0],distance[1],distance[2]);
return 0;
}
