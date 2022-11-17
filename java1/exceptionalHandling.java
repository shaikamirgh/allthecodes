import java.util.InputMismatchException;
import java.util.Scanner;
public class exceptionalHandling
{
	public static void main(String[] args)
	{
		int[] arr={15,20,333,40,55};
		Scanner sc=new Scanner(System.in);
		int ch =0,a,b,res;
		while(ch!=-1)
		{
			System.out.print("Enter the index of array(-1 to quit): ");
			try{
				ch=sc.nextInt();
				System.out.println(arr[ch]);
				System.out.println("Enter two integers: ");
				a=sc.nextInt();
				b=sc.nextInt();	
				System.out.println("Division Result:"+(a/b));
		           }
			catch (ArrayIndexOutOfBoundsException aie)
			{
				System.out.println("Index value is Out of Bound!");
return;
			}
			catch (InputMismatchException ime)
			{	
				System.out.println("Entered value is not valid,character and decimals are not allowed"); //return;
			}
			catch (ArithmeticException ae)
			{	
				System.out.println("Zero Divison Error"); return;
			}
		}
	}
}
