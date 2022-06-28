#include<stdio.h>
#include<string.h>
int main(){
    int n,i,c;
    char a[10];
    scanf("%d", &c);
    for(i=1;i<=c;i++){
        scanf("%s %d", &a, &n);
        if(!strcmp(a , "Thor")) printf("Y\n");
        else 
        printf("N\n");
    }
    return 0;
    
}