#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
 char str[100];
 print("enter the string")  //get the string from user
 scanf("%s",str);
 int length = strlen(str);  //To find the Length of String
 
 for(int i=0;i<length;i++)
 { 
 int g=length-i-1;
 for(int j=0;j<length;j++)
 { 
 if(i==j)
 printf("%c",str[j]);
 else if(j==g)
 printf("%c",str[j]);
 else
 printf(" ");
 
 }
 printf("\n");
 }

}