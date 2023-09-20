#include <stdio.h>

void Add(int val); // compile 순서 때문에 미리 써주는 거.
// 나중에 이런 함수가 나올 것임을 암시.

int num;
/*
전역변수는 프로그램의 시작과 동시에 메모리 공간에 할당되어 종료시까지 존재한다.
별도의 값으로 초기화하지 않으면 0으로 초기화된다.
프로그램 전체 영역 어디서든 접근이 가능하다.
*/

int main(void)
{
    printf("num: %d \n", num);
    Add(3);
    printf("num: %d \n", num);
    num++;
    printf("num: %d \n", num);


    // 전역변수와 동일한 이름의 지역변수가 선언되면, 해당 지역 내에서는 전역변수가 가리워지고 지역변수로의 접근이 이루어진다.
    // 가능하면 그냥 다른 이름을 써라.

    return 0;
}

void Add(int val)
{
    num += val;
}