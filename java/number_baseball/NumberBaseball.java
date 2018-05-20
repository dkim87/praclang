# https://www.codentalks.com/t/topic/2600

import java.util.*;

public class NumberBaseball {
	public static void main(String[] args) {
		int answer[] = new int[3],
			input[] = new int[3];
		
		int strike = 0, ball = 0;
		
		Random rand = new Random();
		Scanner scan = new Scanner(System.in);
		
		answer[0] = rand.nextInt(8) + 1;
		do
		{
			answer[1] = rand.nextInt(8) + 1;
		} while(answer[1] == answer[0]);
		
		do
		{
			answer[2] = rand.nextInt(8) + 1;
		} while (answer[2] == answer[1] || answer[2] == answer[0]);
		
		System.out.println("Play ball!");
		
		do {
			strike = ball = 0;
			
			input[0] = scan.nextInt();
			input[1] = scan.nextInt();
			input[2] = scan.nextInt();
		
			for(int i=0; i<input.length; ++i) {
				for (int j=0; j<answer.length; ++j) {
					if (input[i] == answer[j]) {
						if (i==j) strike++;
						else ball++;
						
						break;
					}
				}
			}
			
			System.out.println("Strike: " + strike + " Ball: " + ball);
		} while (strike != 3);
		
		System.out.println("YOU WIN!");
		scan.close();
	}
}
