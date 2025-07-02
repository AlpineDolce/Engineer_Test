#include <stdio.h>
#include <stdlib.h>

char n[30];
char *test() {
    printf("입력하세요 : ");
    fgets(n, sizeof(n), stdin);
    return n;
}

int main() {
    char *test1;
    char *test2;
    char *test3;

    test1 = test();
    test2 = test();
    test3 = test();

    printf("%s", test1);
    printf("%s", test2);
    printf("%s", test3);

    return 0;
}