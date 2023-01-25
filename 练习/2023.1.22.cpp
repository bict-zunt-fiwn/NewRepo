#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	const char pc[] = {"hello"};
	//printf("%d ",strlen(pc));
	printf("%d ",sizeof(*(&pc)));

}