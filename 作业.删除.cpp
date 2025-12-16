#include <stdio.h>
#include <string.h>

main()
{
	int a[10]={10,8,35,44,24,13,84,13,13,32};
	int b,m,i,j,n;
	n=10;
	scanf("%d",&b);
	
		for(j=0;j<n;j++){
			if(b==a[j]){
			for(m=j;m<n;m++)
			a[m]=a[m+1];
			j--;
			n--;
			}
	}
	for(i=0;i<n;i++)
printf("%d ",a[i]);
}
