#include <stdio.h>
#include <string.h>
main()
{ 
    int a[10],b;
	int n=10,i,j,m;
	for(i=0;i<10;i++)
    scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		b=a[i];
		for(j=i+1;j<n;j++){
			if(b==a[j]){
			for(m=j;m<n;m++)
			a[m]=a[m+1];
			j--;
			n--;
			}
		
	}

}
for(i=0;i<n;i++)
printf("%d ",a[i]);
}
