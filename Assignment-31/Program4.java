import java.util.*;

class Program4
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Plese Enter The String :");

            String str = sobj.nextLine();

            StringDemo obj = new StringDemo();
            boolean bRet = false;

            bRet = obj.CheckVowel(str);

            if(bRet ==true)
            {
                  System.out.println("TRUE");
            }
            else
            {
                  System.out.println("FALSE");
            }
           
      }
}
class StringDemo
{
      public boolean CheckVowel(String s)
      {
          char Arr[] = s.toCharArray();

          for(int icnt = 0;icnt<Arr.length;icnt++)
          {
            if((Arr[icnt]=='a')||(Arr[icnt]=='e')||(Arr[icnt]=='i')||(Arr[icnt]=='o')||(Arr[icnt]=='u'))
            {
                  return true;
            }
            else
            {
                  return false;
            }
          }
            
           
      }
}