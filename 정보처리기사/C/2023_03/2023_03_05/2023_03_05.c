// 5. C언어에서 구조체의 멤버에 접근하기 위해 괄호안의 기호를 작성하시오.

/*
#include <stdio.h>
#include <stdlib.h>
 
typedef struct Data{
    char c;
    int *numPtr; 
} Data;
 
int main(){
    int num = 10;
    Data d1;    
    Data *d2 = malloc(sizeof(struct Data));
    
    d1.numPtr = &num;  
   d2 ( ) numPtr = &num; 
 
    printf("%d\n", *d1.numPtr); 
    printf("%d\n", *d2 ( ) numPtr);
 
    free(d2); 
    return 0;
}
*/


#include <stdio.h>
#include <stdlib.h>
 
typedef struct Data{
    char c;
    int *numPtr; 
} Data;
 
int main(){
    int num = 10;
    Data d1;    
    Data *d2 = malloc(sizeof(struct Data));
    
    d1.numPtr = &num;  
    d2->numPtr = &num; 
 
    printf("%d\n", *d1.numPtr); 
    printf("%d\n", *d2->numPtr);
 
    free(d2); 
    return 0;
}


/*

C언어에서 구조체의 멤버에 접근할 때 사용하는 기호는 다음과 같습니다.

. (dot 연산자) : 구조체 변수로 멤버에 접근할 때
예시: d1.numPtr

-> (화살표 연산자) : 구조체 포인터로 멤버에 접근할 때
예시: d2->numPtr

따라서, 괄호 안에 들어갈 기호는 . 와 -> 입니다.

*/