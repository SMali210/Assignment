import java.util.*;

class Program4
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Number:");
            int iNo = sobj.nextInt();

            Digit obj = new Digit();

            int iRet = obj.Multiply(iNo);
            System.out.println(iRet);
      }
}
class Digit
{
      public int Multiply(int iNo)
      {
            int iMult = 1;
            int iDigit = 0;

            if(iNo < 0)
            {
                  iNo = -iNo;
            }
            while(iNo !=0)
            {
                  iDigit = iNo % 10;
                
                  iMult = iMult * iDigit;

                  iNo = iNo / 10;
            }
            return iMult;

      }
}