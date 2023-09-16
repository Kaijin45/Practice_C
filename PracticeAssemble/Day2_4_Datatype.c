#include <stdio.h>

int main(void)
{
    // char -> 1byte / short -> 2byte / int, long -> 4byte
    // long long -> 8byte
    // float -> 4byte / double -> 8byte / long double -> 8byte 이상
    // 데이터의 표현방식과 메모리 공간을 적절하게 사용하기 위해 다양한 크기의 자료형이 필요하다.

    int num = 10;
    int sz1 = sizeof(num);
    int sz2 = sizeof(int);
    // sizeof는 메모리 공간에서 소모하는 메모리의 크기를 바이트 단위로 계산해서 반환한다.

    printf("%d \n %d \n", sz1, sz2);
    // 결과는 당연하게도 4, 4가 나온다. 몹시 당연하다. 내가 10만 썼다 해도 이미 num이라는 변수에는 int 만큼의 공간이 할당되었으니까.
    // 만약 int끼리 더하고 빼도 그 결과값에 대해 sizeof를 하면 똑같이 4가 나온다.

    //그런데
    char ch1 = 1, ch2 = 2, ch3 = 0;
    short sh1 = 1, sh2 = 2, sh3 = 0;
    printf("%d \n", sizeof(ch1+ch2));
    printf("%d \n", sizeof(sh1+sh2));
    ch3 = ch1 + ch2;
    sh3 = sh1 + sh2;
    printf("%d, %d \n", sizeof(ch3), sizeof(sh3));
    // 위의 값들을 돌려보면 처음 두 printf 값의 결과로 4, 4가 나온다.
    // 맨 아래 printf 값은 1, 2라고 나오는데도.
    // 그 이유는 일반적으로 cpu가 처리하기에 가장 적합한 크기의 정수 자료형을 int로 정의하기 때문.
    // 그래서 int보다 작은 크기의 데이터는 int 형으로 바꿔서 '형 변환' 계산을 진행한다.
    // 그렇기에 연산이 빈번하게 진행된다면 int를 사용하는 게 좋다.

    // double이 실수 범위에서 그나마 적당한 정밀도와 크기를 가지고 있기에 자주 사용한다.
    double rad;
    printf("enter the radius of circle: ");
    scanf("%lf", &rad);
    printf("Area of the circle : %f \n", rad*rad*3.14);

    // unsigned, ASCII 코드 스킵
    //컴퓨터는 문자를 숫자로 표현한다. 문자를 아스키코드로 변환하고 그 코드를 다시 이진수로 변환하여 저장.
    char text = 'A';
    char text2 = 65;
    printf("%c %d \n", text, text);
    printf("%c %d \n", text2, text2);
    // 위의 코드를 통해 우리는 A가 문자로는 A가 되며 1o진수 표시로는 65가 된다는 사실을 알 수 있다.

    // 그리고 상식을 깨트리는 놀라운 사실
    int text3 = 'c', text4 = 67;
    printf("%c %d \n", text3, text3);
    printf("%c %d \n", text4, text4);
    // int로도 문자를 저장할 수 있다.


    int liter = 30 + 40;
    // 30과 40이 메모리 공간에 상수의 형태로 저장되고, 두 상수를 기반으로 덧셈 진행, 그 결과로 얻어진 값을 liter에 저장
    // 위의 30, 40처럼 할당된 메모리 공간에 이름이 없는 수를 literal 상수라고 한다.
    // 저런 값들은 대부분 int형으로 표현 가능하면 int형에 저장, double형에 저장 가능하면 double 형으로 저장한다.
    // 문자도 마찬가지다. A가 65라는 아스키코드 값으로 변환되듯이 int 형에 저장된다.

    /*
    그래서 float numeric_A = 5.789; 를 저장하려고 하면 오류 메시지가 뜰 수 있다.
    컴파일 시 초기화 할 때 double형 데이터를 float형 변수에 저장하니 데이터가 잘려나갈 수 있다는 문구다.
    이는 상수가 기본적으로 double에 저장된 탓에 발생하는 문제다. 우리는 이를 아래처럼 수정하여 문제를 해결 할 수 있다.

    float numeric_A = 5.789f;

    접미사 f 혹은 F를 붙이면 그건 상수를 float형에 저장하라는 뜻이다.
    

    이외에도 여러 접미사들이 있다.

    U : unsigned int
    L : long
    UL : unsigned long
    LL : long long
    ULL : unsigned long long
    F : float
    L : long double

    위의 접미사들은 대소문자 구별하지 않는다.
    */

    // symbolic 상수는 변수와 마찬가지로 이름을 지니는 상수를 말한다.
    // 심볼릭 상수를 표현하기 위해서는 두 가지 방식이 있다.
    // 첫째로는 const 상수를 이용하는 것.
    // 둘째는 매크로 방식 이용하는 것. -> chap26 확인

    const int MAX = 100; // MAX는 상수 취급된다. 그렇기에 MAX값은 변경할 수 없다.
    // 위의 방식처럼 const만 앞에 붙여줘도 바로 된다.
    // 단 상수에 붙이는 것이 const이니 선언과 동시에 초기화까지 해주어야 한다.
    // 상수는 대문자로만 표현하는 것이 관례.

    return 0;

}