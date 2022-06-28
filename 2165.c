#include <stdio.h>


int main()
{
    char twt[500];
    scanf("%[^\n]%*c", &twt);
    
    if(strlen(twt)>140)
    printf("MUTE\n");
    else 
    printf("TWEET\n");
    return 0;
}