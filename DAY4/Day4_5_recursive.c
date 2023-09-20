#include <stdio.h>

int recur(int num)
{
    if(num<=0)
        return;

    printf("recur call! %d \n", num);
    recur(num-1);
}

int main(void)
{
    // 재귀함수는 그 함수를 실행하는 중간에 다시 그 함수의 복사본을 만들어서 그 복사본을 실행한다.
    // 그렇기에 재귀함수는 탈출 조건을 만들어야 무한히 재귀의 굴레에 빠지지 않고 탈출 할 수 있다.
    recur(4);
    return 0;
}
