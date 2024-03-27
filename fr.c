#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *f;
	char ch;
	f=fopen("file1.txt","r");
	if(f==NULL)
	{
		printf("FE");
		getch();
		return;
	}
	fseek(f,-3,2);
	do
	{
		ch=getc(f);
		putchar(ch);
		
	}while(!fseek(f,-2,1));
	fclose(f);
	getch();
}
