#include<stdio.h>
#include<string.h>
int main()
{
    char name[101];
    gets(name);
    int i,j,k,count=0;
    for(i=0;i < strlen(name);i++){
        for(j = i + 1; name[j] != '\0'; j++)
  		{
  			if(name[j] == name[i])
			{
  				for(k = j; name[k] != '\0'; k++)
				{
					name[k] = name[k + 1];
				}
 			}
		}
    }
    for(i=0;i < strlen(name);i++){
        for(j = i + 1; name[j] != '\0'; j++)
  		{
  			if(name[j] == name[i])
			{
  				for(k = j; name[k] != '\0'; k++)
				{
					name[k] = name[k + 1];
				}
 			}
		}
    }
    for(i=0;name[i]!='\0';i++){
        count++;
    }
    if(count%2!=0)
        printf("IGNORE HIM!");
    else
        printf("CHAT WITH HER!");
    return 0;
}
