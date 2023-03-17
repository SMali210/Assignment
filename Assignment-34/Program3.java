import java.util.*;

class Program3
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
           int iRet =  obj.LastOCC(Arr,iNo);
          System.out.print(iRet+"\t");
           
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
      public int LastOCC(int Arr[],int iNo)
      {
            int icnt = 0;
            for(int i = 0;i<Arr.length;i++)
            {
                  if(Arr[i]==iNo)
                  {
                        icnt = i;
                  }
            }
            return icnt;
      }

}