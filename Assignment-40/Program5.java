import  java.util.*;

class Program5
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
                  for(int j = 1;j<=iCol;j++)
                  {
                        if((j==1)||(j==iCol))
                        {
                              System.out.print(j+"\t");
                        }
                        else if((j>=i)||(i==iRow))
                        {
                              System.out.print(j+"\t");
                        }
                        else
                        {
                              System.out.print(" \t");
                        }
                  }
                  System.out.println();
            }
      }
}
