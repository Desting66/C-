#include <stdio.h>
#include <string.h>
main()
{
    char s[100];
    int n,i,j;
	char b;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
		{
			if(s[j]>s[j+1])
			{
				b=s[j];
				s[j]=s[j+1];
				s[j+1]=b;
			}
		}
    
    
    puts(s);
}
