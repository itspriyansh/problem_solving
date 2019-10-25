import java.util.Scanner;
public class Main
{
	public static void main(String args[]){
		Scanner take = new Scanner(System.in);
		int T=take.nextInt();
		while (T!=0){
			int max = 0;
			int n = take.nextInt();
			int A[]= new int[n];
			int B[]= new int[n];
			for (int i=0;i<n;i++)
				A[i] = take.nextInt();
			for(int i=0;i<n;i++)
				B[i]= take.nextInt();
			int total;
			for (int i=0;i<n;i++){
				total = A[i]*20-B[i]*10;
				if(total>max){
					max = total;
				}
			}
		System.out.println(max);
		T--;
		}
			
	}
}
