#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
      char name[20],gender;
      char rek[2][20] = {
        "underweight", "overweight"
      };
      int height,weight,recom,chois,rety;
      printf("Please enter your name: ");scanf("%s",name);fflush(stdin);
      printf("Are you male or female, %s (M, F): ",name);scanf("%c",&gender);fflush(stdin);
      printf("%s, what is your height in c.m. and weight in k.g: ",name);scanf("%d %d",&height,&weight);
      if (gender == 'F' || gender == 'f'){
        recom = height - 110;
        if (recom > weight){
            chois = 0;
        }
        else {
            chois = 1;
        }
      }
      else {
        recom = height - 105;
        if (recom > weight){
            chois = 0;
         }
         else {
            chois = 1;
         }
      }
      rety = fabs((recom-weight));
      printf("%s, your ideal weight is %d kg, you are %d kg %s.",name,recom,rety,rek[chois]);
      return 0;
}
