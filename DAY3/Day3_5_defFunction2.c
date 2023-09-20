#include <stdio.h>

int main(void)
{
    // 어쨌거나 printf도 반환을 한다. 그 값은 뛰어쓰기도 포함하며 \n는 하나의 값으로 여긴다.
    // 이제 함수를 4종류로 구분하여 만들고자 한다.
    // 전달인자 O, X 반환 값 O, X로 구분

}

int Add(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}

