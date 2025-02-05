#include<stdio.h>
int main()
{
	int i,n,s;
	printf("Veiller entrer la valeur de N  :  ");
	scanf("%d",&n);
	
	s=0;
	for(i=1;i<=n;i=i+1)
	{
		s=s+i;
	}
	 printf("La somme de 1 à %d est : %d\n",n,s);





	return(0);
}
