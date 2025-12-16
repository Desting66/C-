#include <stdio.h>
#include <string.h>
main()
{ 
    int a[8],b;
	int n,i;
	for(i=0;i<8;i++)
    scanf("%d",&a[i]);
	scanf("%d",&n);
	for(i=0;i<8;i++)
	{
		if(a[i]==n)
		{
			printf("%d",i);
			break;
		}
		if(i==7)
			printf("-1");
	}	
     
}
