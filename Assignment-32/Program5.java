import java.util.*;

class Program5
{
      public static void main(String arg[])
      {
            Scanner sobj = new Scanner(System.in);

            System.out.println("Enter The Size of Elements That You Want To Create:");
            int iSize = sobj.nextInt();
            
            ArrayDemo obj = new ArrayDemo(iSize);
            obj.Accept();

            obj.Display();
           
      }
}
class ArrayDemo
{
      public int Arr[];

      public ArrayDemo(int iSize)
      {
            Arr = new int[iSize];
      }
      public void Accept()
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter The Elements:");
            for(int icnt = 0;icnt<Arr.length;icnt++)
            {
                  Arr[icnt] = sobj.nextInt();
            }
      }

      public void Display()
      {
            for(int icnt = 0;icnt<Arr.length;icnt++)
            {
                  if(Arr[icnt] % 11 == 0)
                  {
                        System.out.print(Arr[icnt]+"\t");
                  }
                 
            }
           
      }
}