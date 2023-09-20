#include <stdio.h>

int main(void)
{
    // 어쨌거나 printf도 반환을 한다. 그 값은 뛰어쓰기도 포함하며 \n는 하나의 값으로 여긴다.
    // 이제 함수를 4종류로 구분하여 만들고자 한다.
    // 전달인자 O, X 반환 값 O, X로 구분

    HiWorld();

    int fun1, fun3;
    fun1 = Add(4,8);
    ShowResult(fun1);

    fun3 = ReadNum();
    ShowResult(fun3);


    // return이 지니는 의미는 두 개가 있다.
    // 1. 함수를 빠져나가는 것
            // if (num<0)
            //    return;
            // 이렇게 하면 값의 반환 없이 그냥 함수를 빠져나간다.

    // 2. 값을 반환하는 것

    return 0;

}

int Add(int num1, int num2)
{
    // 전달인자 있고, 반환값 있다.
    int result = num1 + num2;
    return result;
}


void ShowResult(int num)
{
    // 전달인자는 있으나 반환값은 없다.
// void는 반환하지 않는다는 뜻.
    printf("Result : %d \n", num);
}

int ReadNum(void)
{
    // 전달인자는 없지만, 반환값은 있다.
    printf("Enter number : ");
    int num;
    scanf("%d", &num);
    return num;
}

void HiWorld(void)
{
    printf("Hi, world \n \n");
}


/*
컴파일은 위에서 아래로 진행되기에 아래의 함수에서 위의 함수(이미 컴파일 했던)를 호출하는 것은 괜찮다.
즉, 여기서 ShowResult를 호출해도 괜찮다.
*/