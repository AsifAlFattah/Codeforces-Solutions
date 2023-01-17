#include<stdio.h>
#include<math.h>
int main()
{
    int t, s, i, ans;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&s);
        if(s<10)
            printf("%d\n",s);
        else{
            int count = 0, a[10];
            for(i=9;i>0;--i){
                if(s-i>=0){
                    s-=i;
                    a[++count] = i;
                }
            }
            for(i=count;i>0;--i){
                printf("%d",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
