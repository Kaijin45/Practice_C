#include <stdio.h>

int main(void)
{
    3+4;
    // 연산자가 작동한다. 실행해도 위의 결과는 결과가 어디에서도 출력되지 않은데, 출력을 위한 명령어가 없으니 당연한 일.
    // 덧셈연산을 하고 그 결과를 메모리에 저장, 그 공간에서 저장된 값을 출력하라. -> 변수 이용
    // 연산자 종류 = + - * / & (/는 몫, %는 나머지를 출력함을 기억하라.)

    // 참고로
    int a = 7;
    int b = 3;
    printf("%d / %d = %d \n", a, b, a/b);
    //를 하면 a/b의 연산을 우선 실행하고 이후에 값들을 집어넣는다.

    int num = 3+6;
    int num1; //변수 num1의 선언
    int num2 = 47; // 변수 num2의 선언 및 초기화.
    num = 83; // 3+6으로 초기화 값이 들어가 있던 num의 변수에 83 대입
    num = 92; // 83이 대입되어 있던 num 변수에 92 대입 _처음 변수에 값을 넣으면 초기화, 두번째부터는 대입
    // 절대 이미 int로 한번 지정한 이후에 다시 쓰지 마라.
    // int num = 28;처럼 다시 말을 쓸 때는 int 필요 없음.

    printf("num : %d, num1 : %d, num2 : %d \n", num, num1, num2);
    //출력하고 보면 num1에 쓰래기 값이 저장되어 있는 거 볼 수 있다.

    /*
    미치고 팔짝 뛸 어이없는 주의사항.
    "중괄호 내에 변수를 선언할 경우 변수의 선언문은 중괄호 앞부분에 위치해야 한다."

    지금은 괜찮지만 예전 버전의 c에서는 int cr; 같은 변수선언들을 다 하고 난 뒤에야 cr =1; 같이 초기화를 시킬 수 있었다.   
    */

    /* 변수 선언시 주의점.
    알파벳, 숫자, _만 사용 가능.
    대소문자 구분함
    변수 이름은 숫자로 시작할 수 없다.
    이름 사이에 공백 불가
    */

    /* 변수의 자료형.
    정수형 변수와 실수형 변수.
    저장 및 참조되는 방식이 다르다.
    해당 부분은 CSAPP+시프 수업에서 배웠으니 스킵
    */

    //복합 대입 연산자.
    // *= /= += %= -= 이것들은 모두 (a -= b) == (a = a - b)와 유사하게 작동.
    // a에 결과값이 대입되는 것을 반드시 기억하라.
    // >>= <<= &= ^= |= 들은 비트 연산자. BitOperator 파일에서 확인할 것.

    // 추가로 이런 연산자도 존재.
    // ++a   값을 1 증가시킨 뒤 속한 문장의 나머지를 진행
    // a++   속한 문장을 먼저 진행한 후 값을 1 증가
    // --a   값을 1 감소시킨 뒤 속한 문장의 나머지를 진행
    // a--   속한 문장을 먼저 진행한 후 값을 1 감소

    int c = 10;
    int d = 10;
    printf("c : %d \n", c);
    printf("c++ : %d \n", c++); //결과는 여전히 10, 출력 후에 값을 1 증가시킨다.
    printf("c : %d \n", c);

    printf("d : %d \n", d);
    printf("--d : %d \n", --d); // 9가 먼저 된다.
    printf("d : %d \n", d);

    int e = 10;
    int f = e++ - 5;
    printf("%d \n", f); //놀랍게도 e는 위의 문장의 연산을 모두 마치고 1이 커지기에 f값에는 6이 아니라 5가 저장된다.

    //비교값 < > == <= >= !=
    //조건 만족시 1을 출력, 거짓시 0을 출력.

    // 논리 연산자 && || !
    // 순서대로 and or not
    // c언어는 0이 아닌 모든 값을 true로 간주한다.
    // 논리 연산자보다 위의 비교 연산자가 먼저 진행됨.
    // 연산자 우선순위 : 책 69p 참조. 자주 보며 익히는 편이 좋겠다.
    // 또한 가능하면 최대한 연산은 내가 바라는 순서에 따라 조금씩 단계를 나눠서 다른 줄에 표시하는 편이 편하겠다.

    return 0;
}