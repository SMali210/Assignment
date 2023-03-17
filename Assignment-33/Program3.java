import java.util.*;

class Program3
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Number:");
            int iNo = sobj.nextInt();

            Digit obj = new Digit();

            int iRet = obj.CountRange(iNo);
            System.out.println(iRet);
      }
}
class Digit
{
      public int CountRange(int iNo)
      {
            int iCnt = 0;
            int iDigit = 0;

            if(iNo < 0)
            {
                  iNo = -iNo;
            }
            while(iNo !=0)
            {
                  iDigit = iNo % 10;
                  
                  if((iDigit > 3)&&(iDigit < 7))
                  {
                        iCnt++;
                  }

                  iNo = iNo / 10;
            }
            return iCnt;

      }
}