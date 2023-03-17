import java.util.*;

class Program1
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size of Elements That You Want To Create:");
            int iSize = sobj.nextInt();

            int Arr[] = new int[iSize];
            
            Number obj = new Number();
            obj.Accept(Arr);
            
            System.out.println("Enter The Frequency Of elements");
            int iNo = sobj.nextInt();
          boolean bRet =  obj.Check(Arr,iNo);
          if(bRet==false)
          {
            System.out.println("TRUE");
          }
          else
          {
            System.out.println("FALSE");
          }
           
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
      public boolean Check(int Arr[],int iNo)
      {
            boolean bFlag = true;
            for(int i = 0;i<Arr.length;i++)
            {
                  if(Arr[i]==iNo)
                  {
                        bFlag = false;
                        break;
                  }
            }
            return bFlag;
      }

}