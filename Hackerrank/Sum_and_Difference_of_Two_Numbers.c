#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b;
    float c,d;
    
    scanf("%d %d",&a,&b);
    scanf("%f %f",&c,&d);
    
    int I_sum = a+b;
    int I_sub= a-b;
    
    float F_sum= c+d;
    float F_sub= c-d;
    
    
    printf("%d %d \n",I_sum,I_sub);
    printf("%0.1f %0.1f",F_sum,F_sub);
    
    return 0;
}
