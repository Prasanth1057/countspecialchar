#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];char count[100];
	int i,l;
	printf("the string is:");
	gets(string);
	int length=strlen(string);
	for(int start=0;start<length;start++)
	{
		if(string[start]=='a'||string[start]=='e'||string[start]=='i'||string[start]=='o'||string[start]=='u'||string[start]=='A'||string[start]=='E'||string[start]=='I'||string[start]=='O'||string[start]=='U')
		{
		 count[i++]=string[start];
	    }
	}
	l=strlen(count);
	printf("count is:%d",l);
}
