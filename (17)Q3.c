#include <stdio.h>
int main()
{
    int cnt=0,i;
    char s[20];
    printf("Enter the string.\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u' )
            cnt++;
        else
            if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' )
            cnt++;
    };

    printf("\nThere are %d vowels in the given string.",cnt);
    return 0;


}


