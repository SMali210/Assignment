import java.util.*;

class Program4
{
      public static void main(String arg[])
      {
            char []Arr = {'b','N','e','B','R','b','A','I','O','G','i'};
            int iCapital = 0;
            int iSmall = 0;
            int iDiff = 0;

            for(int i = 0;i<Arr.length;i++)
            {
                  if((Arr[i] >='A')&&(Arr[i] <='Z'))
                  {
                     iCapital++;
                  }
                  else
                  {
                        iSmall++;
                  }
                
            }

            iDiff = iCapital - iSmall;
            System.out.print("Differnce Frequency "+iDiff+"\t");

             
      }
}