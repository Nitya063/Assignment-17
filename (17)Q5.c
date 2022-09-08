#include <stdio.h>
int main()
{
    int cnt=0,i;
    char s[20],c;
    printf("Enter the string.\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ' && s[i]<97)
            s[i]=s[i]+32;
    };

    printf("\n%s",s);
    return 0;


}



