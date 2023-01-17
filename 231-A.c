#include<stdio.h>
int main()
{
    int n, x, y, z,i;
    int result = 0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int count = 0;
        scanf("%d %d %d",&x,&y,&z);
        if(x==1)
            count++;
        if(y==1)
            count++;
        if(z==1)
            count++;
        if(count>1)
            result++;
    }
    printf("%d",result);

    return 0;
}
