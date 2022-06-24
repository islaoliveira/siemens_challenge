#include <stdio.h>
using namespace std;

int main()
{
    char str[1000],i;
    printf("Enter a string: \n");
    scanf("%s",str);
    for(i=0; str[i]!='\0'; ++i);
       printf("\nLength of the string: %d",i);
    return 0;
}