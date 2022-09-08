#include <stdio.h>
int main()
{
    int l,i;
    char s[20];
    printf("Enter the string\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++);

    printf("\nLength of the string is : %d",i-1);
    return 0;


}
