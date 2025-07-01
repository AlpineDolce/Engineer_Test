/*
1. 다음은 C언어 코드의 문제이다. 보기의 조건에 맞도록 괄호안에 알맞은 코드를 작성하시오.
입력값이 54321일 경우 출력값이 43215로 출력되어야 한다.

int main(void) {
 
    int n[5];
    int i;
 
    for (i = 0; i < 5; i++) {
        printf("숫자를 입력해주세요 : ");
        scanf("%d", &n[i]);
    }
 
    for (i = 0; i < 5; i++) {
        printf("%d", (            ) );
    }
 
  return 0;
 
}
*/

int main(void) {
 
    int n[5];
    int i;
 
    for (i = 0; i < 5; i++) {
        printf("숫자를 입력해주세요 : ");
        scanf("%d", &n[i]);
    }
 
    for (i = 0; i < 5; i++) {
        printf("%d", n[(i+1) % 5]);
    }
 
  return 0;
 
}