#include<stdio.h>
#include<string.h>
main()
{
char a[10];
int q=1;
scanf("%s",a);
char *p=a,*s=a+strlen(a)-1;
for(;*p!='\0'&&p<=s;p++,s--){
if(*p!=*s)
	{printf("不是回文");
     q=0;
     break;}
}
if(q)
	printf("是回文");

}
