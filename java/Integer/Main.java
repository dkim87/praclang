public class Main{
    public static void main(String[] args){
        System.out.println("hello world!");

        int[] a = new int[5];
        int[] b = new int[4];
        System.out.println(a);
        System.out.println(b);
        a = b;
        System.out.println(a);
        System.out.println(b);

        Main my = new Main();
        System.out.println(my);
        System.out.println(new Integer(4));

        Integer x = null;
        System.out.println(x);
        x = new Integer(5);
        System.out.println(x);
        System.out.println(x.toString());
        x = 6;
        Integer y = new Integer(8);
        System.out.println(x);
        System.out.println(y);

        swap(x, y);
        System.out.println(x);
        System.out.println(y);

        x = 10;
        y = 10;
        System.out.println(x == y);
        System.out.println(x.equals(y));

        x = new Integer(10);
        y = new Integer(10);
        System.out.println(x == y);
        System.out.println(x.equals(y));

        System.out.println(System.identityHashCode(x));
        x = 10;
        System.out.println(System.identityHashCode(x));

    }

    public static void swap(Integer x, Integer y){
        Integer t = x;
        x = y;
        y = t;
    }
}
