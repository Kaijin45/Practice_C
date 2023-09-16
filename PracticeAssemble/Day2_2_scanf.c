#include <stdio.h>

int main(void)
{
    int num;

    printf("enter your number:");

    // scanf 함수를 통해 키보드로 입력된 값을 받아올 수 있다.
    // 위의 함수로 다양한 type의 data를 받아올 수 있는데 일단 정수를 받아오는 법은 다음과 같다.

    scanf("%d", &num); // 10진수 정수 형태로 입력 받아서 변수 num에 저장하라.

    // 입력값을 받으려면 data type에 맞게 메모리 공간을 미리 할당해야 한다.
    // printf에서는 서식문자 %d가 10진수 형태의 출력을 의미
    // scanf에서는 서식문자 %d가 10진수 형태의 입력을 의미.
    // 당연히 scanf에서도 "%d %d %d", num1, num2, num3 이런 식으로 값을 여러개 받아오도록 할 수 있다.
    // num 변수 앞에 &를 붙인 이유는, 나중에 포인터 및 함수에 대해 더 이해한 뒤에야 그 의미를 알 수 있다.

    return 0;
}