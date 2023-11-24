// 2023-11-07
//

#include<stdio.h>

int main() {
  int score;
  char grade;
  printf("Enter the score (0-100): ");
  scanf("%d", &score);
  if (score < 0 || score > 100) {
    printf("Incorrect score !\n");
    printf("Enter the score (0-100): ");
    scanf("%d", &score);
  }
  switch (score / 10) {
    case 10:     
    case 9:      grade = 'A'; break;
    case 8:      grade = 'B'; break;
    case 7:      grade = 'C'; break;
    case 6:      grade = 'D'; break;
    case 5:      grade = 'E'; break;
    default:     grade = 'F'; break;
  }
  printf("score / 10 is %d.\n", score/10);
  printf("Your grade for %d is %c.\n", score, grade);
  return 0;
}
