#include<stdio.h>
int main()
{
char name[50];
int i,count=0;
printf("Enter the String: ");
scanf("%s",&name);
for(i=0;name[i]!='\0';i++)
    ++count;
count--;
while(count>=0)
{
printf("%c",name[count]);
count--;
}
return 0;
}
