// 다음 소스코드에서 입력값이 5가 들어왔을때 출력되는 값을 작성하시오.

#include <stdio.h>
int func(int a) {
  if (a <= 1) return 1;
  return a * func(a - 1);
}
 
int main() {
  int a;
  scanf("%d", &a);
  printf("%d", func(a));
 
}
