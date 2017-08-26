#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	FILE *fp1,*fp2;
	char ch;


	fp1=fopen(argv[1],"r");
	if(!fp1)
	{
		printf("error_1\n");
		exit(0);
	}

	fp2=fopen(argv[2],"w");
	if(!fp2)
	{
		printf("error_2\n");
		exit(0);
	}

	ch=fgetc(fp1);
	while(ch!=EOF)
	{
		fputc(ch,fp2);
		ch=fgetc(fp1);
	}

	fclose(fp1);
	fclose(fp2);

	return 0;

}
