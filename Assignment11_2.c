/*
   Accept number of Rows and Columns from user and display below pattern.
   
   Input : iRow = 4     iCol = 4
   
   Output :  A  B  C  D
             a  b  c  d
             A  B  C  D
             a  b  c  d
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
  char ch = '\0';
  int i = 0 , j = 0;
  for(i = 1; i <= iRow; i++)
  {
    ch = 'A';
    if((i % 2) == 0)
    {
      ch = ch + 32;
    }
    for(j = 1; j <= iCol; j++)
    {
     printf("%c\t",ch);
     ch++; 
    }
    printf("\n");
  }
  printf("\n");
}

int main()
{
  int iValue1 = 0 , iValue2 = 0;
  
  printf("Enter Number of Rows and Columns\n");
  scanf("%d %d",&iValue1,&iValue2);
  
  Pattern(iValue1,iValue2);
  
  return 0;
}
