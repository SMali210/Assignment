import java.util.*;

class Program1
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

            obj.Reverse(Arr);
      }
}
class MyArray
{
      public int ReverseDigit(int iNo)
      {
            int Digit = 0;
            int iRev = 0;

            while(iNo !=0)
            {
                  Digit = iNo % 10;

                  iRev = (iRev * 10) + Digit;

                  iNo = iNo / 10;
            }
            return iRev;
      }
      public void Reverse(int Arr[])
      {
            for(int i= 0;i<Arr.length;i++)
            {
                  int iRet = ReverseDigit(Arr[i]);

                  System.out.print(iRet+"\t");
            }
      }
}