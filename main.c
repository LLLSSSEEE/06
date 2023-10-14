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
    int div1, div2;  // div1-분자, div2-분모       
    
    div1 = factorial(n); //n!
    div2 = factorial(n-r)*factorial(r);
    
    // 분모, 분자 나누기 연산
    return (div1/div2); 
}

int main(void)
{
    int n, r;
    int div1, div2; 
    
    //1. 입력값 받음 
        // 메시지 출력
    printf("input n : ");
        // n 입력
    scanf("%d", &n);
    
        // 메시지 출력
    printf("input r : ");
        // r 입력
    scanf("%d", &r);
     
       
    //2. 분모/분자 계산
    int result;
    result = combination(n,r);
    
    
    //3. 최종 값 출력 
        // 분모, 분자 나누기 연산
        // result = div1/div2;
        // 결과 출력  
        printf("the result is %i\n", result);
        
        
  system("PAUSE");	
  return 0;
}

