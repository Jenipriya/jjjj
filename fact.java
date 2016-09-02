import java.io.*;
class facto
public static void main(String[] args)
{
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int d=1;
for(int i=1;i<=n;i++)
{
 d=d*i;
}
System.out.print(d);
}
