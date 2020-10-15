import java.util.*;

interface myCalculator{

	public void add();
	public void sub();
	public void multiply();
	public void divide();
}

class calculator implements myCalculator
{
	private int i1,i2;
	private double d1,d2;
	public int flag;
	calculator(int a,int b)
	{
		i1=a;i2=b;
		flag=1;
	}

	calculator(double a,double b)
	{
		d1=a;d2=b;
		flag=2;
	}

	public void add()
	{
		if(flag==1)
		{
			System.out.println(i1+" + "+i2+" = "+(i1+i2));
		}
		else if(flag==2)
		{
			System.out.println(d1+" + "+d2+" = "+(d1+d2));
		}
	}

	public void sub()
	{
		if(flag==1)
		{
			System.out.println(i1+" - "+i2+" = "+(i1-i2));
		}
		else if(flag==2)
		{
			System.out.println(d1+" - "+d2+" = "+(d1-d2));
		}
	}

	public void multiply()
	{
		if(flag==1)
		{
			System.out.println(i1+" * "+i2+" = "+(i1*i2));
		}
		else if(flag==2)
		{
			System.out.println(d1+" * "+d2+" = "+(d1*d2));
		}
	}

	public void divide()
	{
		if(flag==1)
		{
			try
			{
				System.out.println(i1+" / "+i2+" = "+(i1/i2));
			}
			catch(ArithmeticException e)
			{
				System.out.println(e);
				System.out.println("Divide by Zero Error");
			}
		}
		else if(flag==2)
		{
			try
			{
				System.out.println(d1+" / "+d2+" = "+(d1/d2));
			}
			catch(ArithmeticException e)
			{
				System.out.println(e);
				System.out.println("Divide by Zero Error");
			}
			//as in double datatype divide by 0 is not an error.
		}
	}
}


public class p2
{
	public static void main(String[]args)
	{
		Scanner x=new Scanner(System.in);

		int x1,x2;
		double y1,y2;
		System.out.println("Enter 2 integers : ");
		x1=x.nextInt();
		x2=x.nextInt();
		System.out.println("Enter 2 double no. : ");
		y1=x.nextDouble();
		y2=x.nextDouble();
		calculator c1=new calculator(x1,x2);
		calculator c2=new calculator(y1,y2);
		char a;
		System.out.print("Enter the operator : ");
		a = x.next().charAt(0);
		System.out.println("");
		switch(a)
		{
			case '+' : c1.add();c2.add();break;
			case '-' : c1.sub();c2.sub();break;
			case '*' : c1.multiply();c2.multiply();break;
			case '/' : c1.divide();c2.divide();break;
			default : System.out.println("Error !!!\nEntered invalid operator");
		}
	}
}
