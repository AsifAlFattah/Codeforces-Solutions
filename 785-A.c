#include <stdio.h>
#include <string.h>
int main()
{
    long long int n, count=0,i;
    char str[50];
    scanf("%lld",&n);
    for(i=0;i<n;i++){
        scanf(" %49[^\n]", str);
        if(strcmp(str,"Tetrahedron")==0)
            count = count + 4;
        else if(strcmp(str,"Cube")==0)
            count = count + 6;
        else if(strcmp(str,"Octahedron")==0)
            count = count + 8;
        else if(strcmp(str,"Dodecahedron")==0)
            count = count + 12;
        else if(strcmp(str,"Icosahedron")==0)
            count = count + 20;
    }
    printf("%lld",count);
    return 0;
}
