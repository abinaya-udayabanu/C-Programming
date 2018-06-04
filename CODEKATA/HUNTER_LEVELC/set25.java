package guvi;

import java.util.*;

public class Set25 {

		public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int n=in.nextInt();
		int sum=0;
		int[] a=new int[n];
		for(int i=0;i<n;i++)
		{
			a[i]=in.nextInt();
		}
		for(int i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		System.out.println(sum);
		in.close();
	}

}
