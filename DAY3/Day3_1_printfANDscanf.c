#include <stdio.h>

int main(void)
{
    // printf는 문자열을 출력하는 함수
    // printf에서 ""는 문자열의 시작과 끝으로 인식, 큰 따옴표 자체의 출력을 바란다면 \를 붙여주자.
    printf("Hello world? \n \"Hi\" \n My world says. \n ");
    
    /* 특수문자 종류
    
    \a 경고음
    \b 백스페이스
    \n 개행
    \r 캐리지 리턴
    \t 수평 탭
    \'     \"    \?    \\
    위 4개는 모두 각각의 특수문자 출력 

    \f 폼 피드    \v 수직 탭
    위 2개는 프린트 출력을 위한 특수문자. 모니터 출력에서는 의미가 없음.
    
    */
   
    // printf의 f는 formatted라는 뜻. 즉, '서식이 지정된 형태의 출력'을 의미

    /* 서식문자 종류

    서식문자    출력 대상(자료형)   출력형태
    %d         char, short, int   부호 있는 10진수 정수
    %ld        long               부호 있는 10진수 정수
    %lld       long long          부호 있는 10진수 정수

    %u         unsigned int       부호 없는 10진수 정수
    %o         unsigned int       부호 없는 8진수 정수
    %x, %X     unsigned int       부호 없는 16진수 정수

    만약 8진수를 8진수답게, 16진수를 16진수답게 출력하고 싶다면 #를 이용
    %#o
    %#x

    %f         float, double      10진수 방식의 부동소수점 실수
    %Lf        long double        10진수 방식의 부동소수점 실수
    %e, %E     float, double      e 또는 E 방식의 부동소수점 실수 - e와 E 차이점은 1.2e+12냐 1.2E+12냐의 차이. 별 거 아님.
    %g, %G     float, double      값에 따라 %f와 %e 사이에서 선택

    %c         char, short, int   값에 대응하는 문자

    %s         char *             문자열

    %p         void *             포인터의 주소 값 
    
    */

    /* 필드 폭을 지정하여 정돈된 출력 보이기
    
    %8d   '필드 폭을 8칸 확보하고, 정수를, 오른쪽 정렬해서 출력을 진행한다.
    %-8s  '필드 폭을 8칸 확보하고, 문자열을, 왼쪽 정렬해서 출력을 진행한다.
    
    */

    printf("%-8s %-14s %d  \n", "NAME", "Gradulate", "2023");


    // scanf는 입력을 위해 사용.
    // 어떻게 받아들일 것인가
    // 어디에 저장할 것인가.

    /*
    %d         char, short, int   부호 있는 10진수 정수
    %o         unsigned int       부호 없는 8진수 정수
    %x, %X     unsigned int       부호 없는 16진수 정수
    */

    /*
    얘네는 여기서 모두 동일한 의미, 그냥 flaot로 입력 받겠다는 뜻.
    %f         float, double      10진수 방식의 부동소수점 실수
    %e, %E     float, double      e 또는 E 방식의 부동소수점 실수 - e와 E 차이점은 1.2e+12냐 1.2E+12냐의 차이. 별 거 아님.
    %g, %G     float, double      값에 따라 %f와 %e 사이에서 선택 

    차이점은 이거
    %lf        double             10진수 방식의 부동소수점 실수
    %Lf        long double        10진수 방식의 부동소수점 실수   
    */


    return 0;
}