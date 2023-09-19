#include <stdio.h>

int main(void)
{
    printf("printf can print english! \n");
    printf("Also, it cans print number. ex: %d\n", 1234);
    printf("We can do this. %d %d\n", 29, 57);
    // 문자열 이외이 데이터도 다양한 형토로 출력 가능.
    // %d는 서식문자-conversion specifier- 출력의 형태를 지정하는 용도로 사용.
    // %d : 10진수 정수 형태의 출력
    // 여러번 사용할 수 있고, ""이 끝난 뒤 ,를 이용하여 해당 숫자만큼 써주면 됨.
}