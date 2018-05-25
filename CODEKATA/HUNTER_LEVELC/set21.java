
import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner in=new Scanner(System.in);
		String s=in.nextLine();
		String[] sp=s.split(" ");
		String r="";
		for(int i=0;i<sp.length;i++)
		{
			String w=sp[i];
			String sw="";
			for(int j=w.length()-1;j>=0;j--)
			{
				sw=sw+w.charAt(j);
			}
			r=r+sw+" ";
		}
		System.out.println(r);
	}
}
