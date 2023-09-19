#include <stdio.h>

int main(void)
{


    int n1;
    printf("Input integer : ");
    scanf("%d", &n1);

    if(n1>0)
    {
        printf("Input value is bigger than 0. \n");
    }

/* 기본 구조.

if ( condition )
{
    code 
}
else if( 조건3)
{
    code
}
else
{
    code
}
*/

    // || && ! 이용가능

/* 특이한 조건식
집어넣을 변수 = (조건) ? 참이면 이거 실행 : 거짓이면 이거 실행;
*/

    int abs;
    int kei = -4;
    
    abs = kei>0 ? kei : kei*(-1);

    printf("%d \n", abs);


    // continue break로 반복문 탈출

    //break는 반복문 1개 빠져나오게 함.
    //continue는 나머지 생략하고 반복조건을 확인하러 간다. (즉, 실행중인 위치에 상관없이 반복문의 조건검사 위치로 돌아간다.)

/* switch
switch (expression)
{
case constant-expression_1 :
        code 
    break;
case constant-expression_2 :
        code 
    break;
default:
    break;
}
*/

    //예시를 보면 순식간에 이해된다.
    switch(n1)
    {
        case 1:         // 입력된 값이 1인 경우
            printf("1 entered \n"); //이거 출력
            break;                  //switch문 탈출하는 용도로 사용.
        case 2:
            printf("2 entered \n");
            break;
        case 3:
            printf("3 entered \n");
            break;
        case 4:
            printf("4 entered \n");
            break;
        case 5:
            printf("5 entered \n");
            break;
        case 6:
            printf("6 entered \n");
            break;
        default:
            printf("Not 1~6 integer \n");
    }
    
    // break 선택적으로 사용.

    // goto는 프로그램의 흐름을 원하는 곳으로 이동시킬 때 쓴다. 다만, 쓰지 않는 편이 좋겠다는 것이 현재 분위기.

    return 0;    
}