#include<stdio.h>
#include<math.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);
        if(b>c){
            if(a<b)
                printf("1\n");
            else if(b<a)
                printf("2\n");
            else
                printf("3\n");
        }
        else{
            if(a<(abs(b-c)+c))
               printf("1\n");
            else if(a>(abs(b-c)+c))
               printf("2\n");
            else
               printf("3\n");
        }
    }
    return 0;
}
