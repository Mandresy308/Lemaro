#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,s,m,c,d;
	printf("Veiller entrer la première note   :  ");
	scanf("%f",&a);
	printf("son coefficient");
	scanf("%f",&c);
	printf("veiller entrer la seconde note    :  ");
	scanf("%f",&b);
	printf("son foefficient");
	scanf("%f",&d);
		s=(a*c)+(b*d);
		m=s/(c+d);
	printf("Leur moyenne est  : %f\n",m);

	return(0);



}
