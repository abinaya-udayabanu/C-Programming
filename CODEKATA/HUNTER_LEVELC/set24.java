import java.util.*;

public class Set24 {

	/**
	 * @param args
	 */
	public void permute(String s,int index,int n)
	{
		if(index==n)
		{
			System.out.println(s);
		}
		else
		{
			for(int i=index;i<=n;i++)
			{
				boolean check = shouldswap(s,index,i);
				if(check)
				{
					s=swap(s,index,i);
					permute(s,index+1,n);
					s=swap(s,index,i);
				}
			}
		}
	}
	public boolean shouldswap(String s,int i,int j)
	{
		char[] ar=s.toCharArray();
		for(int k=i;k<j;k++)
		{
			if(ar[k]==ar[j])
				return false;
		}
		return true;
	}
	public String swap(String s,int i,int j)
	{
		char t;
		char[] ar=s.toCharArray();
		t=ar[i];
		ar[i]=ar[j];
		ar[j]=t;
		return String.valueOf(ar);
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in =new Scanner(System.in);
		String s=in.next();
		Set24 ob=new Set24();
		int n=s.length()-1;
		ob.permute(s,0,n);
		in.close();
	}

}
