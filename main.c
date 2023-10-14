#include <stdio.h>
#include <stdlib.h>

int result;


int factorial(int n)
{
    int res = 1;
    int i;
    for (i = 1; i < n+1; i = i+1 )
    {       
        res = res*i;  
    } 
    return res;    
}

int combination(int n, int r)
{
    int div1, div2;  // div1-����, div2-�и�       
    
    div1 = factorial(n); //n!
    div2 = factorial(n-r)*factorial(r);
    
    // �и�, ���� ������ ����
    return (div1/div2); 
}

int main(void)
{
    int n, r;
    int div1, div2; 
    
    //1. �Է°� ���� 
        // �޽��� ���
    printf("input n : ");
        // n �Է�
    scanf("%d", &n);
    
        // �޽��� ���
    printf("input r : ");
        // r �Է�
    scanf("%d", &r);
     
       
    //2. �и�/���� ���
    int result;
    result = combination(n,r);
    
    
    //3. ���� �� ��� 
        // �и�, ���� ������ ����
        // result = div1/div2;
        // ��� ���  
        printf("the result is %i\n", result);
        
        
  system("PAUSE");	
  return 0;
}

