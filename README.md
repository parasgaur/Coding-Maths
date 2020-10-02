# Coding-Maths
//This is The Coding Area
import java.io.*;
import java.util.*;
public class Main
{
  public static void main(String args[])throws IOException{
  BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
    int test,n,check=0,ck=0,steps=0,i;
    int[] pos=new int[10000];
    test=Integer.parseInt(br.readLine());
    int[] du=new int[10000];
    int[] du1=new int[10000];
    while(test>0)
    {
      test--;
      n=Integer.parseInt(br.readLine());
      String s=br.readLine();
      String[] s1=s.split(" ");
      for(i=0;i<n;i++){
        pos[i]=Integer.parseInt(s1[i]);
        System.out.println(pos[i]);
    }
          for(i=0;i<n;i++)
    	  	du1[i]=i+1;
      while(check==0)
      {
        ck=0;
        
        {
        for(i=0;i<n;i++)
        {
          if(du[i]!=i+1)
          {
              System.out.println("hello");
            ck++;
            break;
          }
        }
        }
        if(ck==0)
          check++;
        if(check==0)
        {
          for(i=0;i<n;i++)
          {
            du[pos[i]-1]=du1[i];
          }
          steps++;
            for(i=0;i<n;i++)
              du1[i]=du[i];
              
        }
      }
    }
    System.out.print(steps);
  }
}                
