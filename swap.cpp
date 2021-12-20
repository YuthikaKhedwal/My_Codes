#include <stdio.h>
void swapNumbers(int *a, int *b) {
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}
int main() {
  int n1, n2;
  scanf("%d %d", &n1,&n2);
 printf("Before Swapping : number1 is: %d, number2 is: %d\n",
         n1, n2);
  swapNumbers(&n1, &n2);
  printf("After Swapping : number1 is: %d, number2 is: %d\n",
         n1, n2);
  return 0;
}