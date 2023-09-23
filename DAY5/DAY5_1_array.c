#include <stdio.h>

int main(void)
{
    // array는 여러 개의 변수를 선언해서 사용하는 것.
    int oneDimArr [4];
    // 유의해서 볼 점은 []를 썼다는 점.
    // int형 변수들이 oneDimArr 배열을 이룰 거고. 길이는 4이다.
    
    // 범용적인 compile을 위해서는 [] 내부에 상수만을 적는 편이 좋다.
    // 이를테면 이런 식이다. int constant = 38; int oneDimArr [constant];

    // array에 접근하는 법은 다음과 같다.
    oneDimArr[0] = 1;
    oneDimArr[1] = 2;
    oneDimArr[2] = 3;
    oneDimArr[3] = 4;

    int Arr [4] = {0, 1, 2, 3};

    for(int i = 0; i<4; i++)
    {
        printf("oneDimArr %d : %d \n", i, oneDimArr[i]);
        printf("Arr %d : %d \n", i, Arr[i]);
    }

    int arr2 [3] = {9, 9}; // 1, 2번째 자리에 9 , 9를 넣어두고 3번째 자리에는 자동으로 0 할당
    int arr3 [] = {8, 8}; // 자동으로 2개 길이의 Array arr3을 생성.


    char str[] = "Good morning!";
    // 자동으로 14 길이의 배열이 됨.
    // G, o, o, d,  , m, o, r, n, i, n, g, ! - 13자리.
    // 그리고 맨 뒤에 \0 : null 의미하는 특수문자. 더해서 14자리.

    // null 문자는 아스키 코드 값이 0이다. 문자로 출력할 경우 아무런 출력이 발생하지 않는다.
    // 참고로 공백은 아스키 코드로 32 이다.


    return 0;
}