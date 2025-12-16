#include <stdio.h>
#include <string.h>
main()
{ 
    char a[100],b;
	int n,i,m;
    scanf("%s",a);
	n=strlen(a)/2;
	m=strlen(a);
	for(i=0;i<n;i++)
	{
		b=a[i];
		a[i]=a[m-i-1];
		a[m-i-1]=b;
	}
     
    puts(a);
}
