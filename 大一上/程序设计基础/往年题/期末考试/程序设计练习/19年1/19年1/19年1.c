#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	void Input(char *str1,char*str2,int*g,int*k);
	char* Combine(char*str1,char*str2,int g);
	void KReverse(char*str3,int k);
	char str1[101],str2[101],*str3;
	int g,k;
	Input(str1,str2,&g,&k);
	str3=Combine(str1,str2,g);
	puts(str3);
	KReverse(str3,k);
	puts(str3);
	free(str3);
	return 0;
}
void Input(char *str1,char*str2,int*g,int*k)
{
	printf("�������ַ���str1����󳤶Ȳ�����100����");
	gets(str1);
	printf("�������ַ���str2����󳤶Ȳ�����100����");
	gets(str2);
	printf("����������g��0<=g<�ַ���str1�ĳ��ȣ�");
	scanf("%d",g);
	while(*g<0||*g>=strlen(str1))
	{
		printf("����������g��");
		scanf("%d",g);
	}
	printf("����������k��1<k<=�ַ���str1�ĳ��ȣ�");
	scanf("%d",k);
	while(*k<=1||*k>strlen(str2))
	{
		printf("����������k��");
		scanf("%d",k);

	}
}
char* Combine(char*str1,char*str2,int g)
{
	char*str3;
	int i;
	str3=(char*)malloc(sizeof(char)*(strlen(str2)+strlen(str1)+1));
	strncpy(str3,str1,g+1);
	str3[g+1]=0;
	strcat(str3,str2);
	for(i=0;i<(strlen(str1)-g);i++)
		str3[g+strlen(str2)+1+i]=str1[g+i+1];
	return str3;
}
void KReverse(char*str3,int k)
{
	char str[200];
	int m=strlen(str3)/k,i;
	while(m>0)
	{
		for(i=0;i<k;i++)
			str[i]=str3[(strlen(str3)/k-m+1)*k-1-i];
		for(i=0;i<k;i++)
			str3[(strlen(str3)/k-m)*k+i]=str[i];
		m--;
	}

}