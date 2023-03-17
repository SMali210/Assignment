import java.util.*;

class Program2
{
      public static void main(String arg[])
      {
            char []Arr = {'b','N','e','B','R','b','A','i','G','i'};
            int icnt = 0;

            for(int i = 0;i<Arr.length;i++)
            {
                  if((Arr[i]=='A')||(Arr[i] == 'e') ||(Arr[i]=='i')||(Arr[i]=='o')||(Arr[i]=='u'))
                  {
                     icnt++;
                  }
                
            }
            System.out.print("Number Of Vowel "+icnt+"\t");

             
      }
}