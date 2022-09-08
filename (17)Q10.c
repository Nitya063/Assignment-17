#include <stdio.h>
int main()
{
    int i,f[122]={0};
    char s[20];
    printf("Enter the string.\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ' && s[i]!='\n')
          f[s[i]]++;
    }
     for(i=0;i<122;i++)
    {
        if(f[i]!=0)
            printf("\n%c : %d",i,f[i]);
    }
    return 0;
}

