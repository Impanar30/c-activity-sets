//Write a C program to compare two strings, character by character.

#include <stdio.h>
#include <string.h>

void input_two_strings(char *string1, char *string2)
{
  printf("Enter the first string:");
  scanf("%s", string1);
  printf("Enter the second string:");
  scanf("%s", string2);
}

int stringcompare(char string1, char string2)
{
  int i;
  for(i=0;string1!='\0' && string2!='\0' && string1==string2;++i)
  {
    if(string1>string2)
    return 0;
    if(string2>string1)
    return 1;
  }
  return i;
}

void output(char *string1, char *string2, int result)
{
if(string1>string2)
{
  printf("%s is greater than %s", string1, string2);
}
if(string2>string1)
{
printf("%s is greater than %s", string1, string2);


}
