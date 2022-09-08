#include <stdio.h>
int main()
{
    int i;
    char s[20],c[20];
    printf("Enter the string.\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        c[i]=s[i];

    };

    printf("\n%s",c);
    return 0;


}


