import java.io.*;
class rev
{
public static void main(String[] args)
{
Scanner s=new Scanner(System.in);
int n=s.nextInt();
int a;
while(n>0)
{
a=n%10;
System.out.print(a);
n=n/10;
}
}
}
