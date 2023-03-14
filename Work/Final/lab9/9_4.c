#include <stdio.h>
typedef struct
{
    int facevalues,suits;
}card;
void cal(card a[],int n,char b1[],char b2[]){
    int allscore=0,temp,temp1,temp2,temp3;
    for(int i=1;i<=n;i++){
        for(int j=i+1;j<=n;j++){
            if(a[i].facevalues>a[j].facevalues){
                temp=a[i].facevalues;
                temp2=b1[i];
                temp3=b2[i];
                a[i].facevalues=a[j].facevalues;
                b1[i]=b1[j];
                b2[i]=b2[j];
                a[j].facevalues=temp;
                b1[j]=temp2;
                b2[j]=temp3;
            }
            else if(a[i].facevalues==a[j].facevalues){
                if(a[i].suits>a[j].suits){
                    temp1=a[i].suits;
                    temp3=b2[i];
                    a[i].suits=a[j].suits;
                    b2[i]=b2[j];
                    a[j].suits=temp1;
                    b2[j]=temp3;
                }
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(i==n){printf("%c-%c",b1[i],b2[i]);}
        else{printf("%c-%c,",b1[i],b2[i]);}
    }
    printf("\n");

    for(int i=1;i<=n;i++){
        if(a[i].facevalues==11 || a[i].facevalues==12){allscore=allscore+10;}
        else{allscore=allscore+a[i].facevalues;}
    }
    printf("%d",allscore);
}
int main(){
    int n;
    scanf("%d",&n);
    card array[n+1];
    char arrayt1[50],arrayt2[50];
    for(int i=1;i<=n;i++){
        scanf("%s %s",&arrayt1[i],&arrayt2[i]);
        if(arrayt1[i]=='A'){array[i].facevalues=1;}
        else if(arrayt1[i]=='2'){array[i].facevalues=2;}
        else if(arrayt1[i]=='3'){array[i].facevalues=3;}
        else if(arrayt1[i]=='4'){array[i].facevalues=4;}
        else if(arrayt1[i]=='5'){array[i].facevalues=5;}
        else if(arrayt1[i]=='6'){array[i].facevalues=6;}
        else if(arrayt1[i]=='7'){array[i].facevalues=7;}
        else if(arrayt1[i]=='8'){array[i].facevalues=8;}
        else if(arrayt1[i]=='9'){array[i].facevalues=9;}
        else if(arrayt1[i]=='J'){array[i].facevalues=10;}
        else if(arrayt1[i]=='Q'){array[i].facevalues=11;}
        else if(arrayt1[i]=='K'){array[i].facevalues=12;}
        else{array[i].facevalues=0;}
        if(arrayt2[i]=='C'){array[i].suits=1;}
        else if(arrayt2[i]=='D'){array[i].suits=2;}
        else if(arrayt2[i]=='H'){array[i].suits=3;}
        else if(arrayt2[i]=='S'){array[i].suits=4;}
    }
    cal(array,n,arrayt1,arrayt2);
}
