#include <stdio.h>
main()
{
	float a[10],*p=a,s=0,ave;
    int n=0,i;
	for(i=0;i<10;i++) 
	scanf("%f",&a[i]);                            
for(i=0;i<10;i++) 
{if(*(p+i)>=60){
s+=*(p+i); 
n++;}
}
ave=s/n;
	printf("及格同学的平均分为%.2f",ave);
}
