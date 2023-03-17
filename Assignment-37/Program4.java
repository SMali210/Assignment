import  java.util.*;

class Program4
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
            for(int i = 1;i<iCol;i++)
            {
                  for(int j = 1;j<iRow;j++)
                  {

                        System.out.print("*\t#\t");
                        
                  }
                  System.out.println();
            }
      }
}
