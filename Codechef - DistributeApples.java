import java.util.Scanner;

class Main{
	public static void main(String args[]){
	int T;
	long n,k;
	Scanner sc = new Scanner(System.in);
	T = sc.nextInt();
	for(int i=1;i<=T;i++){
		n= sc.nextLong();
		k= sc.nextLong();
		if (((n/k)%k)!=0)
			System.out.println("YES");
		else
			System.out.println("NO");
	}

	}
}