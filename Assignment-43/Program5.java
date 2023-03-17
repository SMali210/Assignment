import java.util.*;

class Program5
{
      public static void main(String arf[])
      {
            Scanner sobj = new Scanner(System.in);
            System.out.println("Enter The Size Of Element that you Want To Create");
            int iSize = sobj.nextInt();

            float Arr[] = new float[iSize];
            System.out.println("Enter the Elements");

            for(int i = 0;i<Arr.length;i++)
            {
                  Arr[i] = sobj.nextFloat();
            }

            MyArray obj = new MyArray();

            obj.Percentage(Arr);
      }
}
class MyArray
{

      public void Percentage(float Arr[])
      {
            for(int i= 0;i<Arr.length;i++)
            {
                  if(Arr[i] < 35)
                  {
                        System.out.println(Arr[i] +" Fail");
                  }
                  else if((Arr[i] > 35)&&(Arr[i] < 50))
                  {
                        System.out.println(Arr[i]+" Pass class");
                  }
                  else if((Arr[i]>50)&&(Arr[i]<60))
                  {
                        
                        System.out.println(Arr[i] +" Second class");
                  }
                  else if((Arr[i]>60)&&(Arr[i]<70))
                  {
                        
                        System.out.println(Arr[i] +" First class");
                  }
                  else
                  {
                        System.out.println(Arr[i] +" First class with Distinction");
                  }
            }
      }
}