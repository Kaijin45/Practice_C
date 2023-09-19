#include <stdio.h>

int main(void)
{

/*
while ( condition 자리 )
{
    code 자리 
}
*/

    int num = 0;
    while(num<3)
    {
        printf("Print %d times \n", num+1);
        num++;
    }

    // 반복의 대상이 하나의 문장이라면 중괄호는 생략할 수 있다.
    // 그러나 왠만하면 그냥 쓰자.

    int num2 = 0;
    while(num2<3)
        printf("2: Print %d times \n", ++num2);


    //반복이 들어가야 할 위치에 0(거짓)이 아닌 다른 값(참을 의미하는 값)이 온다면 무한루프 발생
    //이때는 break 써야 탈출 가능


/*
do
{
    code 자리 : 시킬 일
} while (condition 자리 : 조건 상태);

위의 while문과의 차이점은 do while은 최소 1번은 실행시킨다는 점에서 의의가 있다.
또한 while () 뒤에 ;를 붙여줘야 실행이 된다.
*/

   int num3 = 0;
    
    do{
        printf("3: Print %d times \n", ++num3);
    }while(num3<3);

    // 보통 일단 1번은 실행하고 scanf로 사용자의 의도를 파악한 뒤 다시 돌릴지 결정할 때 사용하면 좋다.


/*
for (size_t i = 0; i < count; i++)
{
    code 자리
}

인상깊게 볼만한 부분은 size_t부분, 저건 unsigned를 나타냄.
그런데 signed 써도 상관 없음.

for (초기식 ; 조건식 ; 증감식)
{
    반복을 나타내는 자리
}
*/

    for(int num4 =0; num4<3; num4++)
        printf("444: Print %d times \n", num4+1);

    // 마찬가지로 1줄이면 굳이 {} 안 써도 ok
    // 재밌는 점. ++num4 해도 위와 같은 결과가 나온다.
    // 왜냐하면 증감식 자리는 어차피 for문 구조상 한번의 loop의 제일 마지막에 실행되기에.


    return 0;
}