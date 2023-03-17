import java.util.*;

class Program2
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
         int iRet = 0;
         obj.Minimum(Arr1,Arr2);
         
      }
}
class MyArray
{
      public void Minimum(int Arr1[],int Arr2[])
      {
            int iMin1 = Arr1[0];
            int iMin2 = Arr2[0];
           
            for(int i = 0;i<Arr1.length;i++)
            {
                  if(Arr1[i] < iMin1)
                  {
                        iMin1 = Arr1[i];
                  }
               
            }
            System.out.print(iMin1+"\t");
            for(int j = 0;j<Arr2.length;j++)
            {
                  if(Arr2[j] < iMin2)
                  {
                        iMin2 = Arr2[j];
                  }
            }
            System.out.print(iMin2+"\t");

      }
     
}
