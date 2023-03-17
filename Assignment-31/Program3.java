import java.util.*;

class Program3
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese Enter The String :");

            String str = sobj.nextLine();

            StringDemo obj = new StringDemo();
            int iRet = 0;

            iRet = obj.CountDiff(str);

            System.out.println("Differnce Between Number Of Small And Capital Charachters are :"+iRet);
      }
}
class StringDemo
{
      public int CountDiff(String s)
      {
            int Capital = 0 ,Small = 0;
            int iDiff = 0;
            for(int i = 0;i<s.length();i++)
            {
                  if((s.charAt(i) >='a')&&(s.charAt(i) <= 'z'))
                  {
                        Small++;
                  }
                  else if((s.charAt(i) >='A')&&(s.charAt(i) <= 'Z'))
                  {
                        Capital++;
                  }

                  iDiff = Small - Capital;
            }
            return iDiff;
      }
}