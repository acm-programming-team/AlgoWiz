import java.util.*;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;

class Solution
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
            while(st==null||!st.hasMoreElements())
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
        String nextLine()
        {
            String str = "";
            try {
                str = br.readLine();
            }
            catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }
    
    public static void main(String args[])
    {
        try
        {
            FastReader sc = new FastReader();
            int t = sc.nextInt();
            while(t!=0)
            {
                t--;
                String s = sc.nextLine();
                String rep = s.replace("xxxx", "1010");
                System.out.println(rep);
            }
        }
        catch(Exception e)
        {
            return;
        }
    }
}
