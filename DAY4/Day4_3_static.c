#include <stdio.h>

int test(void)
{
    static int num=0;
    /*
    static 쓰면 선언된 함수 내에서만 접근 가능한 지역변수 특성 가짐.
    딱 1회 초기화되고 프로그램 종료 시까지 메모리 공간에 존재.

    이게 무슨 말이냐면 위의 코드는 딱 처음 program을 실행할 때, 전역변수와 같이 초기화된다.
    이후에 코드 실행하면 위의 코드는 해석하지 않고 넘어간다.
    왜 static을 쓰냐면 접근의 범위를 이 test 함수 안으로만 제한하기 위해.
    */
   
    int num2=0;
    num++, num2++;
    printf("static: %d, local: %d \n", num, num2);

}

int main(void)
{
    int i;
    for(i=0; i<3; i++)
    {
        test();
    }
    return 0;
}