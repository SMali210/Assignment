import java.util.*;

class Program1
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size of Elements That You Want To Create:");
            int iSize = sobj.nextInt();
            
            ArrayDemo obj = new ArrayDemo(iSize);
            obj.Accept();

            int iRet = 0;
            iRet = obj.Differnce();
            System.out.print(iRet+"\t");
      }
}
class ArrayDemo
{
      public int Arr[];

      public ArrayDemo(int iSize)
      {
            Arr = new int[iSize];
      }
      public void Accept()
      {
            Scanner sobj = new Scanner(System.in);

            for(int icnt = 0;icnt<Arr.length;icnt++)
            {
                  System.out.println("Enter The Elements:");
                  Arr[icnt] = sobj.nextInt();
            }
      }

      public int Differnce()
      {
           int iEven = 0,iOdd = 0;
           int iDiff = 0;

            for(int icnt = 0;icnt<Arr.length;icnt++)
            {
                  if(Arr[icnt] % 2 == 0)
                  {
                        iEven = iEven + Arr[icnt];
                  }
                  else
                  {
                        iOdd = iOdd + Arr[icnt];
                  }

                  iDiff = iEven - iOdd;
            }
            return iDiff;
      }
}