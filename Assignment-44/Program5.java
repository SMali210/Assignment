import java.util.*;

class Program5
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter the Size Of Array That You want to create");
            int iSize = sobj.nextInt();

            int Arr[] = new int[iSize];
            System.out.println("Enter The Elements");
            for(int i = 0;i<Arr.length;i++)
            {
                  Arr[i] = sobj.nextInt();
            }

            MyArray obj = new MyArray();
            obj.Display(Arr);
      }
}
class MyArray
{
      public void Pattern(int iNo)
      {
            for(int j = 1;j<=iNo;j++)
            {
                  System.out.print("*\t");
            }
            System.out.println();
      }
      public void Display(int Arr[])
      {
            for(int i = 0;i<Arr.length;i++)
            {
                 Pattern(Arr[i]);
            }
      }
}