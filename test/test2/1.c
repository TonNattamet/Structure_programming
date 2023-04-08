// // // // #include <stdio.h>
// // // // void printMonth (int startDay, int days);
// // // // int main (void)
// // // // {
// // // //    printMonth (2, 29);
// // // //    return 0;
// // // // }
// // // // void printMonth (int startDay, int days)
// // // // {
// // // //    int weekDay;
// // // //    int dayCount;
// // // //    printf("Sun Mon Tue Wed Thu Fri Sat\n");
// // // //    printf("--- --- --- --- --- --- ---\n");
// // // //    for (weekDay = 0; weekDay < startDay; weekDay++)
// // // //        printf("    ");
// // // //    for  (dayCount = 1; dayCount <= days; dayCount++)
// // // //        {
// // // //         if (weekDay > 6)
// // // //           {
// // // //             printf("\n");
// // // //            weekDay = 1;
// // // //            }
// // // //         else
// // // //             weekDay++;
// // // //         printf("%3d ", dayCount);
// // // //        }
// // // //    printf("\n--- --- --- --- --- --- ---\n");
// // // //    return;
// // // // }

// // // // #include <stdio.h>
// // // // int main( )
// // // // {
// // // //     int list[10];
// // // //     char c = '*';

// // // //     /* draw triangle */
// // // //     list[0] = 5;
// // // //     drawpoints(c, list, 1);
// // // //     list[0] = 3; list[1] = 7;
// // // //     drawpoints(c, list, 2);
// // // //     list[0] = 1; list[1] = 9;
// // // //     drawpoints(c, list, 2);
// // // //     drawline(c, 1, 10);
// // // //     /* draw rectangle */
// // // //     printf("\n");
// // // //     return 0;
// // // // }

// // // // #include <stdio.h>
// // // // #include <stdlib.h>
// // // // int main()
// // // // {
// // // //     float x = 1.0;
// // // //     printf("Value of x is %.2f\n", x);
// // // //     printf("Address of x is %p\n", &x+1);
// // // //     printf("Address of x is %p\n", &x);
// // // //     printf("Address of x is %p\n", &x-1);
// // // //     return 0;
// // // // }

// // // #include <stdio.h>
// // // int main()
// // // {
// // //     struct aa
// // //     {
// // //         int a;
// // //     }b1,b2;
// // //     b1.a = 1;
// // //     b2.a = 2;

// // //     if(b1.a == b2.a){
// // //         printf("Value of");
// // //     }

// // // }

// // // #include <stdio.h>
// // // typedef struct
// // // {
// // //     int day, month, year;
// // // } date;
// // // int edit(date d1);
// // // int main()
// // // {
// // //     date d1 = {26, 01, 2013};
// // //     edit(d1);
// // //     printf("%d/%d/%d\n", d1.day, d1.month, d1.year);
// // //     return 0;
// // // }
// // // int edit(date d1)
// // // {
// // //     d1.year = d1.year + 10;
// // //     return d1.year;
// // // }

// // #include <stdio.h>
// // typedef struct
// // {
// //     double re, im;
// // } complex;

// // complex cconst(double a, double b);

// // int main()
// // {
// //     double x = 2, y = 0.5;
// //     complex cnum;
// //     cnum = cconst(x, y);
// //     printf("%.2f + %.2fi\n", cnum.re, cnum.im);
// //     return 0;
// // }
// // complex cconst(double a, double b)
// // {
// //     complex num;
// //     num.re = a;
// //     num.im = b;
// //     return num;
// // }

// // #include <stdio.h>
// // int main()
// // {
// //     typedef struct
// //     {
// //         char name[30];
// //         int age;
// //     } student;
// //     student stds[3];
// //     int i;
// //     for (i = 0; i < 3; i++)
// //     {
// //         printf("Enter name of student %d: ", i + 1);
// //         // scanf("%s",stds[i].name);
// //         gets(stds[i].name);
// //         // fflush(stdin);
// //         printf("Enter age: ");
// //         scanf("%d", &stds[i].age);
// //         // fflush(stdin);
// //     }
// //     printf("==================\n");
// //     printf("Name           Age\n");
// //     printf("==================\n");
// //     for (i = 0; i < 3; i++)
// //     {
// //         printf("%-2s%d\n", stds[i].name, stds[i].age);
// //     }
// //     return 0;
// // }

// // D:\\Github\\Structure_programming\\test\\test2\\test.txt
// #include <stdio.h>
// #include <conio.h>
// int main()
// {
//     char ch;
//     FILE *infile, *outfile;
//     infile = fopen("D:\\Github\\Structure_programming\\test\\test\\test1.txt", "r");
//     outfile = fopen("D:\\Github\\Structure_programming\\test\\test\\test2.txt", "w");
//     if ((infile == NULL) || (outfile == NULL))
//     {
//         printf("File open error\n");
//     }
//     else
//     {
//         ch = fgetc(infile);
//         while (ch != EOF)
//         {
//             fputc((char)ch, outfile);
//             ch = fgetc(infile);
//         }
//     }
//     if (infile != NULL)
//         fclose(infile);
//     if (outfile != NULL)
//         fclose(outfile);
//     getch();
//     return 0;
// }

// // D:\\Github\\Structure_programming\\test\\test2\\test.txt

// #include <stdio.h>
// #include <conio.h>
// #include <stdlib.h>
// int main(void)
// {
//     FILE *fp;
//     char ch;
//     if ((fp = fopen("D:\\Github\\Structure_programming\\test\\test2\\test1.txt", "w")) == NULL)
//     {
//         printf("Error in open file");
//         printf("\007");
//         exit(1);
//     }
//     printf("Please press <Enter> to quit program.\n");
//     printf("\nEnter your sentence : ");
//     do
//     {
//         ch = getche();
//         putc(ch, fp);
//     } while (ch != '\r');
//     fclose(fp);
//     getch();
//     return 0;
// }

// // D:\\Github\\Structure_programming\\test\\test2\\test1.txt

// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// int main(void)
// {
//      FILE *fptr;
//      int x=5;
//      float f=4.5;
//      char str[80]="C and C++ Programming";
//      char fname[80];
//      printf("Enter your file name ( file format is *.txt ) :");
//      gets(fname);
//      if( (fptr=fopen(fname, "w")) == NULL )
//      {
//          printf("Error in open file ");
//          printf("\007");
//          exit(1);
//       }
//          fprintf(fptr, "%d \t %.2f \t %s\n", x, f, str);
//          printf("Successful to write data to file");
//          fclose(fptr);
//          getch();
//          return 0;
// }

// // D:\\Github\\Structure_programming\\test\\test2\\test1.txt

// #include<stdio.h>
// #include<stdlib.h>
// #include<conio.h>
// int main(void)
// {
//      FILE *fptr;
//      int x=1;
//      float f=8.5;
//      char str[80]="C and C++ Programming";
//      int j;
//      char fname[80];
//      printf("Enter your file name ( file format is *.txt ) :");
//      gets(fname);
//      if( (fptr=fopen(fname, "w")) == NULL )
//      {
//          printf("Error in open file ");
//          printf("\007");
//          exit(1);
//      }
//          for(j=1; j<=5; j++){
//             fprintf(fptr, "%d \t %.2f \t %s\n ", x, f, str);
//             x= x+1;
//             f= f+1.5;
//         }
//       fclose(fptr);
//       getch();
//       return 0;
// }

// #include <stdio.h>
// #include <stdlib.h>
// #include <conio.h>
// #include <ctype.h>
// int main(void)
// {
//     struct
//     {
//         char name[30];
//         char id[20];
//         float gpa;
//     } student;

//     char numstr[80], fname[80];
//     FILE *fptr;
//     printf("Enter your file name (file format is *.txt) :");
//     gets(fname);
//     if ((fptr = fopen(fname, "wb")) == NULL)
//     {
//         printf("Error in open file");
//         exit(1);
//     }
//     do
//     {
//         printf("\nEnter student name :");
//         gets(student.name);
//         printf("Enter student id :");
//         gets(student.id);
//         printf("Enter student gpa :");
//         gets(numstr);

//         student.gpa = atof(numstr);
//         fwrite(&student, sizeof(student), 1, fptr);
//         printf("Add another student(y/n)?:");
//     } while (tolower(getche()) == 'y');
//     fclose(fptr);
//     getch();
//     return 0;

// // }D:\\Github\\Structure_programming\\test\\test2\\text2.txt

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(void)
// {
//      struct {
//             char name[30];
//             char id[20];
//             float gpa;
//      } student;
//      char fname[80];
//      FILE *fptr;
//      printf("Enter your file name (file format is *.txt) :");
//      gets(fname);
//      if( (fptr=fopen(fname, "rb")) == NULL )
//      {
//          printf("Error in open file");
//          exit(1);
//      }
//          while( fread(&student, sizeof(student),1, fptr) == 1 )
//          {
//                 printf("\nName = %s\n", student.name);
//                 printf("Id = %s\n", student.id);
//                 printf("GPA = %.2f\n", student.gpa);
//          }
//     fclose(fptr);
//     getch();
//     return 0;
// }

// #include <stdio.h>
// #include <conio.h>
// int  main() {
//    char ch;
//    FILE *infile, *outfile;
//    infile = fopen("D:\\Github\\Structure_programming\\test\\test2\\text1.txt","r");
//    outfile = fopen("D:\\Github\\Structure_programming\\test\\test2\\text2.txt","w");
//    if((infile == NULL)||(outfile == NULL))
//    {
//       printf("File open error\n");
//    }
//    else {
//       ch = fgetc(infile);
//       while (ch != EOF) {
//           fputc((char)ch, outfile);
//           ch = fgetc(infile);
//       }
//    }
//    if (infile != NULL) fclose(infile);
//    if (outfile != NULL) fclose(outfile);
//    getch();
//    return 0;
// }

// #include <stdio.h>
// void main(){
//   long loc;
//   FILE *Ptr;
//   if ((Ptr=fopen("D:\\Github\\Structure_programming\\test\\test2\\text1.txt","rb"))==NULL){
//      printf("Error opening file!");
//      return;
//   }
//  printf("Enter byte to seek:");
//   scanf("%d",&loc);
//   if (fseek(Ptr, loc, SEEK_SET)){
//      printf("Error on seeking file!");
//      return;
//   }
//   printf("data at location %ld is %c", loc, getc(Ptr));
//   fclose(Ptr);
// }

#include <stdio.h>
#include <string.h>
void main()
{
   char s1[30], s2[30];

   printf("Please enter string1: ");
   gets(s1);
   strcpy(s2, s1);
   printf("s1 : %s\n", s1);
   printf("s2 : %s\n", s2);
}