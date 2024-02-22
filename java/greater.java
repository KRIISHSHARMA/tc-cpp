import java.io.*;
public class VoterBR 
{
    public static void main(String []args) throws IOException
    {
        InputStreamReader isr=new InputStreamReader(System.in);
        BufferedReader  br=new BufferedReader(isr);
        System.out.print("Enter Number 1  : ");
        int n1=Integer.parseInt(br.readLine());
        System.out.print("Enter Number 2  : ");
        int n2=Integer.parseInt(br.readLine());
        int result = (n1 > n2) ? n1 : n2;
        System.out.printf("greater number is %d ",result);
    }
}

