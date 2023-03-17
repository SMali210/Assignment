import java.util.*;

class Program1
{
      public static void main(String arg[])
      {
            char []Arr = {'b','N','j','B','R','b','A','d','G','G'};
            int icnt = 0;

            for(int i = 0;i<Arr.length;i++)
            {
                  if((Arr[i]>='A')&&(Arr[i] <= 'Z'))
                  {
                      System.out.print(Arr[i]+"\t");

                  }
                
            }
             
      }
}