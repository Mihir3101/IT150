class Car
{
	int model_no;

}

public class p4
	
{
	public static void main(String [] args  )
	{
		Car a1=new Car();
		Car a2=new Car();

		a1.model_no=191;
		a2.model_no=347;

		int temp;

		System.out.println("Model no. of car 1 is "+a1.model_no+"and that of Car 2 is "+a2.model_no);

		temp=a1.model_no;
		a1.model_no=a2.model_no;
		a2.model_no=temp;

		System.out.println("After Swapping Model no. of car 1 is "+a1.model_no+"and that of Car 2 is "+a2.model_no);

	}
}