#include <stdio.h>
int main(){
 int h, h1, hr,m,m1,d,d1,s,s1;

 scanf("Dia %d",&d);
 scanf("%d : %d : %d\n",&h,&m,&s);
 scanf("Dia %d",&d1);
 scanf("%d : %d : %d",&h1,&m1,&s1);

s = s1 - s;
m = m1 - m;
h = h1 - h;
d = d1 - d;

if(s<0){
	s+=60;
	m--;
}

if(m<0){
	m+=60;
	h--;
}

if(h<0){
	h+=24;
	d--;
}

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);


 return 0;
}