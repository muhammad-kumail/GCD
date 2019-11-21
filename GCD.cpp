#include<stdio.h>
#include<conio.h>

main()
{
	int n1,n2,s,c;
	printf("Enter Two Numbers: ");
	scanf("%d%d",&n1,&n2);
	if(n2>n1){
		s=n2;
		n2=n1;
		n1=s;
	}
	c=1;
	while(c!=0)
	{
		c=n1%n2;
		n1=n2;
		n2=c;
	}
	printf("\n%d is GCD",n1);
	getch();
}
