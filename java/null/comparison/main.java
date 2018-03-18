public class main{
    public static void main(String[] args) {
        Foo f1 = new Foo(5);
        Foo f2 = new Foo(5);
        System.out.println(f1 == f2);
        // outputs false, they're distinct object instances

        System.out.println(f1.equals(f2));
        // outputs true, they're "equal" according to their definition

        Foo f3 = null;
        System.out.println(f3 == null);
        // outputs true, `f3` doesn't have any object reference assigned to it

        try{
        System.out.println(f3.equals(null));
        // Throws a NullPointerException, you can't dereference `f3`, it doesn't refer to anything
        }catch(Exception e){
            System.out.println("exception!");
        }

        System.out.println(f1.equals(f3));

        System.out.println(null == (Object)0); // false? hm...

        if (null){
            System.out.println("this object is null");
        }
        if (!null){
            System.out.println("This object is not null");
        }
        // Outputs false, since `f1` is a valid instance but `f3` is null,
        // so one of the first checks inside the `Foo#equals` method will
        // disallow the equality because it sees that `other` == null
    }
}
