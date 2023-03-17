import java.util.*;

class Program2
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese Enter The String :");

            String str = sobj.nextLine();

            StringDemo obj = new StringDemo();
            int iRet = 0;

            iRet = obj.CountSmall(str);

            System.out.println("Number Of Samll Charachters are :"+iRet);
      }
}
class StringDemo
{
      public int CountSmall(String s)
      {
            int icnt = 0;

            for(int i = 0;i<s.length();i++)
            {
                  if((s.charAt(i) >='a')&&(s.charAt(i) <= 'z'))
                  {
                        icnt++;
                  }
            }
            return icnt;
      }
}