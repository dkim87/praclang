import java.util.Scanner;
class main{
    public static void main(String[] args){
        System.out.println("Hello world");

        Scanner reader = new Scanner(System.in);

        int result = 0;
        while(true){
            try{
                System.out.println("Enter a number: ");
                String s = reader.next();
                System.out.println(s);
                result = Integer.parseInt(s);
                break;
            }catch(NumberFormatException e){
                System.out.println("Please enter in integer format.");
                continue;
            }
        }
        System.out.print("integer parse result: ");
        System.out.println(result);
        reader.close();

    }
}
