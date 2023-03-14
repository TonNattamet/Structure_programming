#include <stdio.h>
#include <stdlib.h>

void sort(int l[], int N){
    printf("\n");
    int j,i,s1,s2,count=0;
    int f[]={};
    for(j=0;j<N;j++){
        for(i=0;i<N-1;i++){
          if(l[i]>l[i+1]){
             s1 = l[i];s2 = l[i+1];
             l[i] = s2;l[i+1] = s1;}}}
    for( i = 0 ; i < N ; i++ )
    {printf("%d ",l[i]);}
    printf("\n");
}
void count(int l[],int N){
    int i,j,count,f[N];
    for(i=0;i<N;i++){
        count = 0;
        for(j=0;j<N;j++){
            if(l[i]==l[j]) {count += l;}}
        f[i] - count;
    }
    for(i=0;i<N;i++){
      printf("%d :",l[i]);
      printf("%d\n",f[i]);
    }
}
int main ()
{
    int i, N;
    time_t t;
    scanf("%d",&N);
    int l[N];
    srand((unsigned) time(&t));
    for( i = 0 ; i < N ; i++ ){
        l[i] = rand() % 1001;
    }
    sort(l,N);
    count(l,N);
}
