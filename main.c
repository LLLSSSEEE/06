#include <stdio.h>
#include <stdlib.h>

void func1(void)
{
     int x;
     printf("func1 x is at %p\n", &x);
}

int main(void) {
    int x; //main함수 안의 x 
    printf("main x is at %p\n", &x); //큰 따옴표 안을 출력. 
                                     //%p : 16진수 형태로 출력. 
                                     //&x: 메모리의 주소. x가 메모리 안에서 어디에 위치해있는지를 설명해준다.  
    func1();
  
  system("PAUSE");	
  return 0;
}

// 결과는 다 다르게 나온다. 대신 숫자 두개가 같아야 한다. 
//한메모리 공간 안에 x라는 변수가 다른 메모리 주소를 잡아먹고 있으면 다르게 나온다.  
//숫자가 더 크면 stack(다음으로 부르는 함수 위치)-main(제일 먼저 부르는 함수 위치). 아래로 내려갈 수록 번지수 높아진다. 
