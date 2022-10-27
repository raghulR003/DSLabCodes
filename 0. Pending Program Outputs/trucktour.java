import java.util.*;
public class trucktour {
	public static void main(String[] args) {
		 Scanner sc = new Scanner(System.in);
		 int N = sc.nextInt();
		 long[] a = new long[N];
		 for (int i = 0; i < N; i++) {
            a[i] = sc.nextLong() - sc.nextLong();
        }
		int val = calculate(a);
		System.out.println("\n"+val);
	}

	public static int calculate(long[] n_pumps) {
		int i = 0;
		while (true) {
			while (n_pumps[i] < 0) {
				i = (i + 1) % n_pumps.length;
			}
			long temp = 0;
			int j = i - 1;
			while (temp >= 0) {
				if (i == j) {
					return i + 1;
				}
				temp += n_pumps[i];
				i = (i + 1) % n_pumps.length;
			}
		}
	}
}