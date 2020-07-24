
class Area
{
	double area;

	public void display(double a)
	{
		System.out.println("Area :"+a);
	}

	Area(int r)
	{
		area=3.14 * r * r; 
		System.out.print("Cirle's ");
		display(area);
	}

	Area(int l,int b)
	{
		area=l*b;
		System.out.print("Rectangle's ");
		display(area);
	}
}

public class p3
{
	public static void main(String []args)
	{
		Area circle = new Area(5);
		Area rect = new Area(15,20);
	}
}