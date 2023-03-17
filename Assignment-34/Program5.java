import java.util.*;

class Program5
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size of Elements That You Want To Create:");
            int iSize = sobj.nextInt();

            int Arr[] = new int[iSize];
            
            Number obj = new Number();
            obj.Accept(Arr);
      
           int iRet =  obj.Product(Arr);
          System.out.print("Product Of Odd Elements Are :"+iRet+"\t");
           
      }
}
class Number
{
      
      public void Accept(int Arr[])
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter The Elements:");
            for(int icnt = 0;icnt<Arr.length;icnt++)
            {
                  Arr[icnt] = sobj.nextInt();
            }
      }
      public int Product(int Arr[])
      {
            int iMult = 1;
            for(int i = 0;i<Arr.length;i++)
            {
                  if((Arr[i] % 2)!=0)
                  {
                        iMult = iMult * Arr[i];
                  }
            }
            return iMult;
      }

}