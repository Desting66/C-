#include<stdio.h> 

main(){
	int s[10],t[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int i,j,n=0,m,o=0,p=0;
	for(i=0;i<10;i++)
	scanf("%d",&s[i]); 
for(m=0;m<10;m++){
	o=0; 
	j=s[m];
	for(i=0;i<10;i++){
	if(j==t[i])
	o=1;
	if(o)
	continue;	}
	if(!o)
	p++;
	t[n++]=j; 

}
		printf("%d",p);
}
