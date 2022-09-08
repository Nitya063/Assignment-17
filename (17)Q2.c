#include <stdio.h>
int main()
{
    int cnt=0,i;
    char s[20],c;
    printf("Enter the string.\n");
    fgets(s,20,stdin);
    fflush(stdin);
    printf("Enter the character.\n");
    scanf("%c",&c);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==c)
            cnt++;
    };

    printf("\n%c occurs in the given string %d times.",c,cnt);
    return 0;


}

