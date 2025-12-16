#include<stdio.h>
#include<string.h>
main()
{
	float a[8],b,c;
	int i,j;
	for(i=0;i<8;i++)
	scanf("%f",&a[i]);
	for(i=0;i<8;i++)
	{
		for(j=1;j<8-i;j++)
		{
			if(a[j]>a[j-1])
			{
				b=a[j];
				a[j]=a[j-1];
				a[j-1]=b;
			}
		}
	}
for(i=0;i<8;i++)
	printf("%.1f ",a[i]);
}

















