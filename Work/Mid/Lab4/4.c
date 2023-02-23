#include <stdio.h>
#include <stdlib.h>

int main() {
  float final_score, mid_score, hw, total;
  char grade[9][10] = {"A", "B+", "B", "C+", "C", "D+", "D", "F"};
  int grade_check;
  printf("Enter mid-term score :");
  scanf("%f", &mid_score);
  printf("Enter final score :");
  scanf("%f", &final_score);
  printf("Enter homework score :");
  scanf("%f", &hw);
  total = (final_score * 0.5) + (mid_score * 0.4) + hw;
  if ((total <= 100) && (total >= 90))
    grade_check = 0;
  else if ((total >= 85) && (total < 90))
    grade_check = 1;
  else if ((total >= 80) && (total < 85))
    grade_check = 2;
  else if ((total >= 70) && (total < 80))
    grade_check = 3;
  else if ((total >= 60) && (total < 70))
    grade_check = 4;
  else if ((total >= 55) && (total < 60))
    grade_check = 5;
  else if ((total >= 50) && (total < 55))
    grade_check = 6;
  else
    grade_check = 7;
  printf("Total score : %1f\nC-Programming grade is : %s", total,
         grade[grade_check]);
  return 0;
}
