#include<stdio.h>
#include<string.h>
int main()
{
    int t, n, i, j, length;
    scanf("%d",&t);
    char name[]="Timru";
    while(t--){
        scanf("%d",&n);
        char string[n], temp;
        scanf("%s",&string);
        for (i = 0; i < n-1; i++) {
            for (j = i+1; j < n; j++) {
                if (string[i] > string[j]) {
                    temp = string[i];
                    string[i] = string[j];
                    string[j] = temp;
                }
            }
        }
        if(strcmp(string,name)==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}
