
class Account
{
	public int bal;
	public int damt,wamt;

	public void deposit()
	{
		System.out.println("The Amount Deposited is "+damt);
	}

	public void withdraw()
	{
		System.out.println("The Amount Withdrawn is "+wamt);
	}

	public void checkBal()
	{
		System.out.println("The Final Balance is "+(bal + damt - wamt));
	}
}

public class p1
{
	public static void main(String args[])
	{
		Account a=new Account();
		a.bal=5000;
		System.out.println("The initial balance is "+a.bal);
		a.wamt=800;
		a.damt=2000;
		a.deposit();
		a.withdraw();
		a.checkBal();
	}
}