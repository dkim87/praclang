import java.util.Scanner;

class main{
    public static void main(String[] args) {
        System.out.println("hello world.\n");
        System.out.println("Insert int");
        Scanner input = new Scanner(System.in);
        int x = input.nextInt();
        System.out.println("x is "+x);

        /* this does not work
        String y = input.nextLine();
        */

        input.nextLine(); // get rid of extra '\n'
        String y = input.nextLine();
        System.out.println("y is "+y);
    }
}
