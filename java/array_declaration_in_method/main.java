public class main{
    public static void main (String[] args) {
        main m = new main();
        m.printhello();

        char[] str = {'h','e','l','l','o'};
        System.out.println(str);

        main n = main();

        n.print_array(str);


    }

    public void printhello(){
        System.out.print("hello");
    }

    public static int[] declare(){

        int[] a = {1, 2, 3};
        return a;
    }

    public void print_array(int[] arr){
        for (int i : arr) {
            System.out.println(i);
        }
    }
}

