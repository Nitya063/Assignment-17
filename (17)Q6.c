#include <stdio.h>
int main()
{
    int l,i,j,k;
    char s[20],temp;
    printf("Enter the string\n");
    fgets(s,20,stdin);
    for(i=0;s[i]!='\0';i++);
    j=i-1;
    k=0;
    while(k<=j)
    {
        temp=s[k];
        s[k]=s[j];
        s[j]=temp;
        k++;
        j--;
    }
    printf("\n%s",s);
    return 0;


}

