#include <stdio.h>

int main(void)
{
    int n1, n2;
    
    n1 = printf("12345 \n");
    n2 = printf("I love my home \n");

    printf("%d %d \n", n1, n2);
    
    return 0;

    // 이상하게도 오류가 발생한다.
    // 다른 프로세스가 파일을 사용 중이기 때문에 프로세스가 엑세스 할 수 없습니다.
    // printf 에서 1개 n1만 적용할 때는 괜찮은데 무슨 이유일까?
    // 일단 다른 파일들은 무사히 작동.
    // 인터넷에서 오류 원인을 찾아보았다. 근데 이게 그 원인들과 무슨 관련이 있지?
    // 일단 수업 과제 due가 가까워지고 있으니 공부에 집중하고 다음에 다시 살펴보자.
}