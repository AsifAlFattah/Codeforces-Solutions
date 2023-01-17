#include<stdio.h>
int isComposite(int num)
{
    int i,j;
    for(i=2;i<=num/2;i++){
        if(num%i==0)
            return 1;
    }
    return 0;
}
int main()
{
    int num,num1,num2,i;
    scanf("%d",&num);
    num1 = num/2;
    while(num1>3){
        num2 = num-num1;
        if(isComposite(num1) && isComposite(num2)){
            printf("%d %d",num1,num2);
            return 0;
        }
        num1--;
    }
    return 0;
}
