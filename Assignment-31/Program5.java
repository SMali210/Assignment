import java.util.*;

class Program5
{
      public static void main(String arg[])
      {
            String str = "";
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese Enter The String :");

            str = sobj.nextLine();
            
            StringDemo obj = new StringDemo();
            obj.Reverse(str);
          
      }
}
class StringDemo
{
      public void Reverse(String s)
      {
            int length = s.length();
            String rev = "";

           for(int i = length-1;i>=0;i--)
            {
                  rev = rev + s.charAt(i);
            }
            System.out.print(rev+"\t");
          

      }
}
