#include<stdio.h>
int main()
{
	float a,b,c;
	printf("Entrer la valeur de A  :  ");
	scanf("%f",&a);
	printf("Entrer la valeur de B  :  ");
	scanf("%f",&b);
	printf("Entrer la valeur de C  :  ");
	scanf("%F",&c);
	if((a>b)&&(a>c))
	{
		printf("max = %f\n",a);	
	}
	else	if((b>c)&&(b>a))
		{
			printf("max = %f\n",b);
		}
		else
		{
			printf("max = %f\n",c);
		}
	return(0);
}
