
class Employee
{
	String name;
	int id;
	int salary;

	public void display()
	{
		System.out.println("\nName : "+name+"\nsalary : "+salary+"\nEmployee ID : "+id);
	}

	public void check()
	{
		if(salary>=50000)
		{
			display();
		}
	}
}

public class p2
{
	public static void main(String[]args)
	{
		Employee e1=new Employee();
		e1.name="Mihir";
		e1.id=1234;
		e1.salary=50000000;

		Employee e2=new Employee();
		e2.name="rohan";
		e2.id=1235;
		e2.salary=5000;
		System.out.println("Data of all employees");
		e1.display();
		e2.display();
		
		System.out.println("\nData of employees with salary > 50000");
		
		e1.check();
		e2.check();
	}
}