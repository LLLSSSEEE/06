#include <stdio.h>
#include <stdlib.h>

int sumTwo(int a, int b) //��ȯ�� �Լ� (�Ű�����) ���� 
{
    int c = a + b;
    return c;
} 

int square(int n) 
{
    return n*n;
}

int get_max(int x, int y) //���߿� ū �� ��� 
{
    if (x > y)
       return x;
    else  //else ���� ����. x�� ũ�� x�� ��µ� �״�. 
       return y;
}

int main(int argc, char*argv[])
{
    int a, b;
    int n;
    int x, y;
    
    a = 15;
    b = 4; 
    printf("sumTwo result : %i\n", sumTwo(a, b));
    
    n = 4;
    printf("square result : %i\n", square(n));
    
    x = 13;
    y = 48;
    printf("get_max result : %i\n", get_max(x, y));
     
  system("PAUSE");	
  return 0;
}

