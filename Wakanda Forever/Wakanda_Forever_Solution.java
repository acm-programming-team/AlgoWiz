import java.util.*;
import java.util.StringTokenizer;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class Solution
{
    static class FastReader
    {
        BufferedReader br;
        StringTokenizer st;
        public FastReader()
        {
            br = new BufferedReader(new InputStreamReader(System.in));
        }
        String next()
        {
            while(st == null || !st.hasMoreElements())
            {
                try 
                {
                    st = new StringTokenizer(br.readLine());    
                } 
                catch (IOException e) 
                {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }
        int nextInt()
        {
            return Integer.parseInt(next());
        }
        long nextLong()
        {
            return Long.parseLong(next());
        }
    }
    public static void main(String args[])
    {
        try 
        {
            FastReader sc = new  FastReader();
            int t = sc.nextInt();
            while(t!=0)
            {
                t--;
                long n = sc.nextLong();
                if(n<6)
                    System.out.println("15");
                else
                {
                    long smallCrate = n/6;
                    long rem = n%6;
                    long cost = smallCrate * 15;
                    if(rem == 1 || rem == 2)
                        cost = cost - 15 + 20;
                    else if(rem == 3 || rem == 4)
                        cost = cost - 15 + 25;
                    else if(rem == 5)
                        cost = cost + 15;
                    System.out.println(cost);
                }
            }        
        } 
        catch (Exception e) 
        {
            return;
        }
    }
}
