import java.util.*;

class Program3
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size Of First Element That You Want To Create");
            int iSize1 = sobj.nextInt();

            int Arr1[] = new int[iSize1];
            System.out.println("Enter The Elements");
            for(int i = 0;i<Arr1.length;i++)
            {
                  Arr1[i] = sobj.nextInt();
            }

            System.out.println("Enter The Size Of second Element That You Want To Create");
            int iSize2 = sobj.nextInt();

            
            int Arr2[] = new int[iSize2];
            System.out.println("Enter The Elements");
            for(int j = 0;j<Arr2.length;j++)
            {
                  Arr2[j] = sobj.nextInt();
            }

        MyArray obj = new MyArray();
        obj.DisplayOdd(Arr1,Arr2);
           
      }
}
class MyArray
{
      public void DisplayOdd(int Arr1[],int Arr2[])
      {
            for(int i = 0;i<Arr1.length;i++)
            {
                  if(Arr1[i] % 2 != 0)
                  {
                        System.out.print(Arr1[i]+"\t");
                  }
              
            }

            System.out.println();

            for(int j = 0;j<Arr2.length;j++)
            {
                  if(Arr2[j] % 2 != 0)
                  {
                        System.out.print(Arr2[j]+"\t");
                  }
                 
            }
      }
}
