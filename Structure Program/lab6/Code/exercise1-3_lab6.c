#include<stdio.h>
#include<math.h>
#define PI 3.14
int main()
{
    int choice,w,h;
    float r;
    printf("============ MENU ============\n");
    printf("1.Calculate area of rectangle\n2.Calculate area of circle\nPlease enter 1 or 2: ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
    printf("Please enter width:");scanf("%d",&w);
    printf("Please enter height:");scanf("%d",&h);
    rectangle(w,h);break;
    case 2:
    printf("Please enter radius:");scanf("%f",&r);
    circle(w,h);break;
    }
    return 0;
}

void rectangle(int x,int y){
    float area;
    area = x*y;
    printf("Area = %f",area);
}
void circle(float x){
    float area;
    area = PI*pow(x,2);
    printf("Area = %.2f",area);
}
