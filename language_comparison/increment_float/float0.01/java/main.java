public class main{
    public static void main (String[] args) {
        //double a = 1, b = 2;
        double a = 1, b = 2;
        for(int i=1;a<=b;++i, a+=0.01){
            System.out.printf("%dth trial: %.20g\n", i, a);
        }
    }
}
