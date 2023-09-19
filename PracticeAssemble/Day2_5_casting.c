#include <stdio.h>

int main(void)
{
    // 자료형 변환. 데이터의 표현방식 바꾸는 것.
    // 자동 형 변환 (묵시적 형 변환), 강제 형 변환 (명시적 형 변환 - 프로그래머의 명령)

    double num1 = 245; // int형 정수 245를 double형으로 자동 형 변환. (상수가 int로 되어있었으니.)
    int num2 = 3.14; // double에서 int로 변환되니 소수부의 손실이 발생한다.

    // 소수부 손실, 상위 바이트 잘라내기. -> csapp

    // CPU가 처리하기에 가장 적합한 크기의 정수 자료형이 int. 그러니 자동 형 변환이 되어 연산이 진행된다.
    short n1 = 3, n2 = 4;
    short n3 = n1+n2; // 정수의 승격 (int로 형변환되어 계산하고 그 값을 n3에 저장하니)
    //근데 이로 인해 int에서 short로 줄어드는 형 변환이 다시 일어남.

    // int와 double의 연산에서는 double로 형 변환되어 계산
    // 피연산자의 자료형이 일치하지 않아서 발생하는 자동 형 변환은 데이터의 손실을 최소화하는 방향으로 진행
    // int -> long -> long long -> float -> double -> long double

    double d1, d2;
    d1 = n1/n2;
    printf("%f \n", d1);

    // 위의 실행 결과는 0.0000이다. 왜?
    // 당연하다. int의 연산을 처리한 값이 double d에 저장되니 int 계산상에서 이미 사라진 소수자리를 받아갈 수 없었던 것.

    d2 = (double)n1/n2;
    printf("%f \n", d2);
    // 이렇게 하면 원하던 결과가 나온다.


    return 0;
}