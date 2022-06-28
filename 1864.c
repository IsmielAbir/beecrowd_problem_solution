#include <stdio.h>
 
int main() {
 
    char ch[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int a,i;
    scanf("%d",&a);
    for(i=0;i<a;i++){
        printf("%c", ch[i]);
    }
    
    printf("\n");
    return 0;
}