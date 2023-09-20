#include <stdio.h>

int main(void)
{
    // register int num = 3;
    // 위와 같은 코드는 앞으로 빈번히 사용할 거기 때문에 접근이 가장 빠른 레지스터에 저장하라고 시키는 것.
    // 그러나 register는 기본적으로 크기가 메우 작기 때문에 많이 선언하지 않는 편이 좋다.
    // 단, 우리가 선언한다고 해도 컴파일러가 합당하지 않다고 판단하면 레지스터에 할당되지 않는다.
    // 아무리 선언하지 않아도 컴파일러가 필요성에 따라 제 맘대로 저장하기도 함.
    // 전역변수는 결코 레지스터 선언을 할 수가 없다.
}