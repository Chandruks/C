#include<stdio.h>
int main()
{
char name[]="Hello";
int i,count=0;
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
