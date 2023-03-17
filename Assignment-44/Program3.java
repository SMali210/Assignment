import java.util.*;

class Program3
{
      public static void main(String arg[])
      {
            char []Arr = {'b','N','e','B','R','b','A','i','G','i','B'};
            char ch = 'b';
            int icnt = 0;

            for(int i = 0;i<Arr.length;i++)
            {
                  if(Arr[i] == ch)
                  {
                     icnt++;
                  }
                
            }
            System.out.print("Number Of Vowel "+icnt+"\t");

             
      }
}