#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	int i,n;
	fp=fopen("data.txt","r");
	if(fp==NULL)
{
	printf("Error in file open.");
	exit(0);
}
fseek(fp,0,SEEK_END);
n=ftell(fp);
i=0;
while(i < n)
{
	i++;
	fseek(fp,-i,SEEK_END);
	ch=fgetc(fp);
	printf("%c",ch);
}
fclose(fp);
getch();
}
