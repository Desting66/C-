#include <stdio.h>
#include <string.h>

main()
{
	char s[20]="DMSaenory",a,b,c;
	int i,j;
scanf("%c",&a);
for(i=0;i<strlen(s);i++)
{
	if(s[i]<=a&&s[i+1]>=a){
		break;
	}
}
i++;
b=s[i];
s[i]=a;
i++;

for(;i<strlen(s)+2;i++)
{
	a=s[i];
	s[i]=b;
	b=a;
}


	puts(s);
}
