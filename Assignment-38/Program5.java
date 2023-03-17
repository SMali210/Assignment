 import java.util.*;

class Program5
{
      public static void main(String arg[])   
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The String :");
            String str = sobj.nextLine();

            Pattern pobj = new Pattern();
            pobj.Pattern(str);
            
      }
}
class Pattern
{
      public void Pattern(String s)
      {
            int i = 0, j = 0;
            int length = s.length();
              length = 1;
            for(i=0;i<s.length();i++)
            {
                 
                  for(j= 0;j<length;j++)
                  {
                     
                       System.out.print(s.charAt(j)+"\t");
                         
                  }
                  System.out.println();
                 
                  length++;
                  
                  
            }

            length = length-1;
            length--;
            for(i=0;i<s.length();i++)
            {
                 
                  for(j= 0;j<length;j++)
                  {
                     
                       System.out.print(s.charAt(j)+"\t");
                         
                  }
                  System.out.println();
                 
                  length--;
                  
                  
            }

      }
}