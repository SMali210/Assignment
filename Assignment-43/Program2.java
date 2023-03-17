import java.util.*;

class Program2
{
      public static void main(String arf[])
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter The Size Of Element that you Want To Create");
            int iSize = sobj.nextInt();

            int Arr[] = new int[iSize];
            System.out.println("Enter the Elements");

            for(int i = 0;i<Arr.length;i++)
            {
                  Arr[i] = sobj.nextInt();
            }

            MyArray obj = new MyArray();

            obj.Summation(Arr);
      }
}
class MyArray
{
      public int SummationDigit(int iNo)
      {
            int Digit = 0;
            int iSum = 0;

            while(iNo !=0)
            {
                  Digit = iNo % 10;

                  iSum = iSum + Digit;

                  iNo = iNo / 10;
            }
            return iSum;
      }
      public void Summation(int Arr[])
      {
            for(int i= 0;i<Arr.length;i++)
            {
                  int iRet = SummationDigit(Arr[i]);

                  System.out.print(iRet+"\t");
            }
      }
}