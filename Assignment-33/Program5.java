import java.util.*;

class Program5
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Number:");
            int iNo = sobj.nextInt();

            Digit obj = new Digit();

            int iRet = obj.CountDiff(iNo);
            System.out.println(iRet);
      }
}
class Digit
{
      public int CountDiff(int iNo)
      {
            int iEven = 0 , iOdd = 0;
            int iDigit = 0 , iDiff = 0;
      

            if(iNo < 0)
            {
                  iNo = -iNo;
            }
            while(iNo !=0)
            {
                  iDigit = iNo % 10;
                  
                  if((iDigit % 2)==0)
                  {
                       iEven = iEven + iDigit;
                  }
                  else
                  {
                        iOdd = iOdd + iDigit;
                  }
                  
                   iDiff = iEven - iOdd;

                  iNo = iNo / 10;
            }
            return iDiff;

      }
}