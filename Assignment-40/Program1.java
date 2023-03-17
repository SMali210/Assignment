import  java.util.*;

class Program1
{
      public static void main(String arg[])   
      {
            Pattern pobj = new Pattern();
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter numbers of rows :");
            int i = sobj.nextInt();

            System.out.println("Enter numbers of colum :");
            int j = sobj.nextInt();

            pobj.Display(i,j);
      }
}
class Pattern
{
      public void Display(int iRow ,int iCol)
      {
            for(int i = 1;i<=iRow;i++)
            {
                  for(int j = iCol;j>=1;j--)
                  {
                        if(j==i)
                        {
                              System.out.print("#\t");
                        }
                        else
                        {
                              System.out.print("*\t");
                        }
                  }
                  System.out.println();
            }
      }
}
