#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--){
        char str1[4];
        char str2[4]="yes";
        scanf("%s",&str1);
        strlwr(str1);
        int result = strcmp(str1,str2);
        if(result==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
