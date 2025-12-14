#include<stdio.h>
main()
{
	int a[4][4],x,y,i,j;
	
	for(i=0;i<4 ;i++)
	{
		for(j=0;j<4 ;j++)
		{
	scanf("%d",&a[i][j]);
		}
	}
	    for(i=0;i<4 ;i++)
	{
		for(j=0;j<4 ;j++)
		{
if(i+j<3)
		a[i][j]=a[i][j]+1;
	else if(i+j>3)
	    a[i][j]=a[i][j]-1;
	}
			}

	
	for(i=0;i<4 ;i++)
	{
		for(j=0;j<4 ;j++)
		{
	printf("%3d",a[i][j]);
		if((j+1)%4==0)
		printf("\n");
		}
	}
	
}
