/*
   Accept number of Rows and Columns from user and display below pattern.
   
   Input : iRow = 4     iCol = 4
   
   Output :  *  *   *   *
             *  *   *   #
             *  *   #   #
             *  #   #   # 
*/

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
  int i = 0 , j = 0;
  for(i = 1; i <= iRow; i++)
  {
    for(j = iCol; j >= 1; j--)
    {
      if((i > 1)&&(j < i))
      {
        printf("#\t");
      }
      else
      {
        printf("*\t");
      }
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
