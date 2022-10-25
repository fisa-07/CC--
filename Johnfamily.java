import java.util.Scanner;
public class Johnfamily {
    public static void main(String[] args) {
       Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int x = sc.nextInt();
		int s[] = new int[n];
		int p[] = new int[n];
		int count = 0;
		
		for(int i=0; i<n; i++)
		{
			p[i] =sc.nextInt();
			
			if(p[i] != -1)
				s[p[i]]++;
		}
		
		for(int i=0; i<n; i++)
		{
			if(s[i] >= x)
				count++;
		}
		
		System.out.println(count);
	}   
}
