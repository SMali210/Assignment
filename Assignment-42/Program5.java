import java.util.*;

class Program5
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

         MyArray obj = new MyArray();

        boolean  bRev = obj.ChkPallindrome(Arr1);

        if(bRev == true)
        {
            System.out.print("TRUE"+"\t");
        }
        else
        {
            System.out.print("FALSE"+"\t");
        }
           
      }
}
class MyArray
{
      public int Reverse(int iNo)
      {
            int iDigit = 0;
            int iRev = 0;

            while(iNo !=0)
            {
                  iDigit = iNo % 10;
                  iRev = (iRev * 10) +iDigit;
                  iNo = iNo / 10;
            }
            return iRev;
      }

      public boolean ChkPallindrome(int Arr1[])
      {
          boolean bFlag = false;

          for(int i = 0;i<Arr1.length;i++)
          {
                  int iRet = 0;
                  iRet = Reverse(Arr1[i]);

                  if(iRet == Arr1[i])
                  {
                        bFlag = true;
                        break;

                  }

          }
          return bFlag;

            
      }
     
}
