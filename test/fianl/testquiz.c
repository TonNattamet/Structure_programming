
// #include <stdio.h>
// int main(void)

// {
//     int a; /& a is an integer &/

//     a = 7;

//     int &aPtr; /& aPtr is a pointer to an integer &/

//     aPtr = &a; /& aPtr set to address of a &/

//     printf("The address of a is %p\n The value of aPtr is %p", &a, aPtr);

//     printf("\n\nThe value of a is %d\n The value of &aPtr is %d", a, &aPtr);

//     printf("\n\nShowing that & and & are complements of each");

//     printf("\n\nShowing that & and & are complements of each other\n&&aPtr = %p\n&&aPtr = %p\n",&&aPtr, &&aPtr );

//     return 0; /& indicates successful termination &/
// } /& end main &/

// #include <stdio.h>

// int main()
// {
//     int x = 1, y = 2;
//     int &ip, &iq;
//     ip = &x;
//     y = &ip;
//     &ip = 0;
//     y = 5;
//     ip = &y;
//     &ip = 3;
//     iq = ip;
//     printf("\n1 %d", x);
//     printf("\n2 %d", y);
//     printf("\n3 %p", &ip);
//     printf("\n4 %p", &iq);
//     printf("\n5 %p", ip);
//     printf("\n6 %p", iq);
//     printf("\n7 %d", ip);
//     printf("\n8 %d", iq);
//     printf("\n9 %d", &ip);
//     printf("\n10 %d", &iq);
//     printf("\n11 %d", &x);
//     printf("\n12 %d", &y);

//     return 0;
// }

// #include <stdio.h>
// void swap(int &, int &);
// int main()
// {

//     int x = 5,y = 10;
//     printf("Before swap : x = %d, y = %d\n", x, y);
//     swap(&x, &y);
//     printf("After swap : x = %d, y = %d\n", x, y);

//     return 0;
// }

// void swap(int &px, int &py)
// {
//     int temp;
//     temp = &px;
//     temp = &px;
//     &px = &py;
//     &py = temp;
// }

// #include <stdio.h>
// // #include <string.h>
// int stlen(char &s);
// int main()

// {
//     char str1[10];
//     scanf("%s", str1);
//     printf("String length is %d\n", stlen(str1));
//     return 0;
// }

// int stlen(char &s)
// {
//     int n;
//     for (n = 0; &s != '\0'; s++)
//     {
//         n++;
//     }
//     return n;
// }

// #include <stdio.h>
// void func(int *x,int *y);

// int main()
// {
//     int a = 5;
//     int b = 7;
//     printf("%d %d\n", a,b);
//     func(&a,&b);
//     printf("%d %d\n", a,b);
//     return 0;
// }

// void func(int *x,int *y)
// {

//     int temp;
//     temp = *x;
//     *x =*y;
//     *y = temp;
//     // printf("%d\n", &x);
//     // return &x;
// }


#include <stdio.h>
int *smaller(int *px,int *py);

int main(void){
    int a,b,*p;
    int c;
    scanf("%d %d",&a,&b);
    p = smaller(&a,&b);
    // printf("%d %d",a,b);

}
int *smaller(int *px,int *py){

    return (*px < *py ? px : py);

}