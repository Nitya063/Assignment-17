#include <stdio.h>
int main()
{
    int i,f[122]={0},j;
    char s[20];
    printf("Enter the string.\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ' && s[i]!='\n')
          f[s[i]]++;
    }
    printf("\n");
     for(i=0;i<122;i++)
    {
        if(f[i]!=0)
            for(j=1;j<=f[i];j++)
              printf("%c ,",i);
    }
    return 0;
}

