import java.util.*;

class Program4
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
        obj.Concate(Arr1,Arr2);
           
      }
}
class MyArray
{
      public void Concate(int Arr1[],int Arr2[])
      {
            for(int i = 0;i<Arr1.length;i++)
            {
                System.out.print(Arr1[i]+"\t");
            }

            for(int j = 0;j<Arr2.length;j++)
            {
                  System.out.print(Arr2[j]+"\t");
            }
      }
}
