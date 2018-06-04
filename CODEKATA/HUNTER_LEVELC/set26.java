package guvi;

import java.util.*;

public class Set26 {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		int x=in.nextInt();
		int[] a=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=in.nextInt();
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(a[j]>a[j+1])
				{
					int t=a[j];
					a[j]=a[j+1];
					a[j+1]=t;
				}
			}
		}
		int[] b=new int[n];
			for(int j=0;j<n;j++)
				{
					int s=Math.abs(x-a[j]);
					b[j]=s;
				}
		for(int i=0;i<n-1;i++)
		{
			for(int j=0;j<n-i-1;j++)
			{
				if(b[j]>b[j+1])
				{
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				int k=b[j];
				b[j]=b[j+1];
				b[j+1]=k;
				}
			}
		}
		for(int i=1;i<4;i++)
		{
			System.out.print(a[i]+" ");
		}
		in.close();

	}

}
