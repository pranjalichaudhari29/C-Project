#include<stdio.h>
#include<conio.h>
void main()
{
	int n=0,s,temp=0,s1=10,i,k,k1=10,v,v1=10;

	clrscr();
	printf("Display the menu \n");
	do
	{
		printf("1:Samosa 2:Kachori 3:Vadapav 4:exit \n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: printf("Enter the no.of samosa");
				scanf("%d",&s);
				for(i=1;i<=s;i++)
				temp=temp+s1;
				break;
			case 2: printf("Enter the no.of Cachori");
				scanf("%d",&k);
				for(i=1;i<=k;i++)
				temp=temp+k1;
				break;
			case 3: printf("Enter the no. of vadapav");
				scanf("%d",&v);
				for(i=1;i<=v;i++)
				temp=temp+v1;
				break;

			case 4: break;


		}

	} while(n!=4);
	printf("Billing Amount:-> %d\n",temp);
	getch();

}