public class sort
{

    public static void check_shorted(int[]mynum)
        {

          for(int i=0;i<mynum.length-1;i++)
          {
             if(mynum[i]>mynum[i+1])
               {
                 System.out.println("false");
                 return;
               }
          }
          System.out.println("true");
        }
    public static int[] delete_element(int array[],int pos)
    {
        
        for(int i=pos;i<array.length-1;i++)
        {
        array[i]=array[i+1];
        
        }
        return array;
    }
    
    public static void main(String[]args)
    {
        int mynum [] = {1,2,4,3,6,4,5};
        for(int i=0;i<mynum.length-1;i++)
          {
             if(mynum[i]>mynum[i+1])
               {
                 int pos=i;
                 mynum = delete_element(mynum,pos).clone();
                 check_shorted(mynum);
                 return;
               }
          }
          System.out.println("already shorted : true");
    }


}