#include <stdio.h>
#include <string.h>
main()
{
	char str[50],*ps;
	ps=str;
	scanf("%s",str);
	int a,i;
	a=strlen(str);
	for(i=0;i<a;i+=2)
	{printf("%c",*(ps+i));
	getchar();
	}
	
}
