import java.util.*;

class Program1
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese Enter The String :");

            String str = sobj.nextLine();

            StringDemo obj = new StringDemo();
            int iRet = 0;

            iRet = obj.CountCapital(str);

            System.out.println("Number Of Capital Charachters are :"+iRet);
      }
}
class StringDemo
{
      public int CountCapital(String s)
      {
            int icnt = 0;

            for(int i = 0;i<s.length();i++)
            {
                  if((s.charAt(i) >='A')&&(s.charAt(i) <= 'Z'))
                  {
                        icnt++;
                  }
            }
            return icnt;
      }
}