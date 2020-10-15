import java.util.*;

interface student
{
	public void sread();
	public void sdisplay();
}

interface faculty
{
	public void fread();
	public void fdisplay();
}

class college implements student,faculty
{
	//code for student details
	public String sname;
	public String id;
	public String gender;
	public String sdept;
	public int mks[]=new int[6];

	public void sread()
	{
		System.out.println("\n Enter the Student details ");
		Scanner x = new Scanner(System.in);
		System.out.print("Enter your name : ");
		sname=x.nextLine();
		System.out.print("Enter id : ");
		id=x.nextLine();
		System.out.print("Enter the department : ");
		sdept=x.nextLine();
		System.out.print("Enter gender : ");
		gender=x.nextLine();
		for(int i=0;i<6;i++)
		{
			System.out.print("Enter the marks of subject"+(i+1)+" : ");
			mks[i]=x.nextInt();
		}

	}

	public void sdisplay()
	{
		System.out.println("\nThe Student details ");
		System.out.println("Name : "+sname);
		System.out.println("id :"+id);
		System.out.println("department :"+sdept);
		System.out.println("gender : "+gender);
		for(int i=0;i<6;i++)
		{
			System.out.println("Marks in subject"+(i+1)+" : "+mks[i]);
		}
	}
	
	//code of faculty details
	
	public String fname;
	public String dept;

	public void fread()
	{
		System.out.println("\n Enter the Faculty details ");
		Scanner x = new Scanner(System.in);
		System.out.print("Enter Faculty`s name : ");
		fname=x.nextLine();

		System.out.print("Enter the Departments name : ");
		dept=x.nextLine();
	}

	public void fdisplay()
	{
		System.out.println("\n The Faculty details ");
		System.out.println("Faculty's name : "+fname);
		System.out.println("Faculty's Department : "+dept);
	}
}

public class p3
{
	public static void main(String[]args)
	{
		
		college collegeObject = new college();
		
		collegeObject.sread();
		collegeObject.fread();
		System.out.println("\n********************************");
		collegeObject.sdisplay();
		collegeObject.fdisplay();
		
	}
}