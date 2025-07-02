/*9. 다음 아래 코드에서 이진수를 십진수로 변환하는 코드에 대해 괄호 (a) (b)의 적합한 답을 작성하시오.

#include <stdio.h>
 
int main() {
 
    int input = 101110;
    int di = 1;
    int sum = 0;
 
    while (1) {
 
        if (input == 0) break
        else {
 
          sum = sum + (input (a)(b)) * di;
             di = di * 2;
             input = input / 10;
 
        }
    }
 
    printf("%d", sum);
 
    return 0;
}

*/



#include <stdio.h>
 
int main() {
 
    int input = 101110;
    int di = 1;
    int sum = 0;
 
    while (1) {
 
        if (input == 0) break;
        else {
 
          sum = sum + (input % 10) * di;
             di = di * 2;
             input = input / 10;
 
        }
    }
 
    printf("%d", sum);
 
    return 0;
}
