#include <stdio.h>
main()
{
char s[40],*ps=s;
scanf("%s",s);
int i,a=0,b=0,c=0;
for(i=0;*(ps+i)!='\0';i++)
 {
 	if(*(ps+i)>='a'&&*(ps+i)<='z')
 	{a++;
	 }else if(*(ps+i)>='A'&&*(ps+i)<='Z')
	 {b++;
	 }else{c++;
	 }
 }
 printf("小写字母个数%d,大写字母个数%d,其他字符个数%d",a,b,c);   
    

}
