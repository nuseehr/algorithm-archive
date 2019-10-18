import java.util.Scanner;
import java.util.Arrays;

public class Main {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);

		int[] arr = new int[9];
		int sum = 0;
		
		for (int i=0; i<9; i++) {
			arr[i] = sc.nextInt();
			sum += arr[i];
		}

		Arrays.sort(arr);

		boolean fnd = false;

		for (int i=0; i<9; i++) {
			for (int j=i+1; j<9; j++) {

				if (!fnd && (sum - (arr[i] + arr[j]) == 100)) {
					arr[i] = -1;
					arr[j] = -1;
					fnd = true;
					break;
				}
			}
			if (arr[i] != -1) System.out.println(arr[i]);
		}
	}
}
