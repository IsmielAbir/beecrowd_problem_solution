#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d%d", &n,&m);
	for(int i=1;i<=m;){
	    for(int j=1;j<=n;j++,i++){
	        printf("%d ", i);
	    }
	    printf("\n");
	} 
	
	 return 0;
}