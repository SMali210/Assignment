import java.util.*;

class Program4
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size of Elements That You Want To Create:");
            int iSize = sobj.nextInt();

            int Arr[] = new int[iSize];

            System.out.println("Enter Start Number:");
            int iStart = sobj.nextInt();

            System.out.println("Enter End Number:");
            int iEnd = sobj.nextInt();
            
            Number obj = new Number();
            obj.Accept(Arr);
            
            obj.Display(Arr,iStart,iEnd);
         
      }
}
class Number
{
      
      public void Accept(int Arr[])
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter The Elements:");
            for(int icnt = 0;icnt<Arr.length;icnt++)
            {
                  Arr[icnt] = sobj.nextInt();
            }
      }
      public void Display(int Arr[],int iStart,int iEnd)
      {
            for(int i = 0;i<Arr.length;i++)
            {
                  if((Arr[i]>iStart)&&(Arr[i]<iEnd))
                  {
                         System.out.print(Arr[i]+"\t");
                  }
                 
            }
            
      }

}