//Accept character from user and check whether characte is upper case or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int CheckUpperCase(char ch)
{
if(ch>='A' && ch<='Z')
{
return TRUE;
}
else
{
return FALSE;
}
}
int main()
{
char ch;
int iRet=0;
printf("Enter the one character:");
scanf("%c",&ch);

iRet=CheckUpperCase(ch);
if(iRet==TRUE)
{
printf("TRUE");
}
else
{
printf("FALSE");
}

return 0;
}