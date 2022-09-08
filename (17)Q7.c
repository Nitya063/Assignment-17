#include <stdio.h>
int main()
{
    int a=0,d=0,sc=0,i;
    char s[20];
    printf("Enter the string.\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=91)
            a++;
        else
            if(s[i]>=97 && s[i]<=122)
             a++;
        else
            if(s[i]>=48 && s[i]<=57)
             d++;
        else
             sc++;
    };

    printf("\nNo. of alphabets : %d\nNo. of digits : %d\nNo. of special characters : %d",a,d,sc-1);
    return 0;


}



