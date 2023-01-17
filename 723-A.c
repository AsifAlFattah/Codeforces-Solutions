#include<stdio.h>
int main()
{
    int x1,x2,x3,max,mid,min;
    scanf("%d %d %d",&x1,&x2,&x3);
    if(x1>=x2 && x1>=x3){
        max = x1;
        if(x2>=x3){
            mid = x2;
            min = x3;
        }
        else{
            mid = x3;
            min = x2;
        }
    }
    else if(x2>=x1 && x2>=x3){
        max = x2;
        if(x1>=x3){
            mid = x1;
            min = x3;
        }
        else{
            mid = x3;
            min = x1;
        }
    }
    else if(x3>=x1 && x3>=x2){
        max = x3;
        if(x1>=x2){
            mid = x1;
            min = x2;
        }
        else{
            mid = x2;
            min = x1;
        }
    }
    int steps = (max-mid)+(mid-min);
    printf("%d",steps);
    return 0;
}
