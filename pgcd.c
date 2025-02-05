#include<stdio.h>

int main()
{
	int a,b,r,d,di;
	printf("Veiller entrer le premier nombre  :   ");
	scanf("%d",&a);
	printf("Veiller entrer le second nombre   :   ");
	scanf("%d",&b);
	if(a>b) 
	{
		d=a;
		di=b;
	}
	else
	{
		d=b;
		di=a;
	}

		do
		{
			r=d%di;
			d=di;
			di=r;
		}
		while(r!=0);

			if(r!=0)
			{
				printf("pgcd =  %d  ",r);
			}
			else
			{
				printf("pgcd =  %d  ",d);
			}
	return(0);
}
