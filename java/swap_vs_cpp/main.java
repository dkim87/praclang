public class main{

    public static void tricky(Point arg1, Point arg2){
        arg1.x = 100;
        arg1.y = 100;
        Point temp = arg1; // no effect
        arg1 = arg2;
        arg2 = temp;
    } // therefore, tricky can only affect Point.x, Point.y, not Point object.

    public static void main(String [] args){
        Point pnt1 = new Point(0,0);
        Point pnt2 = new Point(0,0);

        System.out.println("X: "+pnt1.x+"Y: "+pnt1.y);
        System.out.println("X: "+pnt2.x+"Y: "+pnt2.y);

        tricky(pnt1, pnt2); // reference is not changed
        System.out.println("tricky!");

        System.out.println("X: "+pnt1.x+"Y: "+pnt1.y);
        System.out.println("X: "+pnt2.x+"Y: "+pnt2.y);

    }
}

class Point{
    int x;
    int y;

    public Point(){
        this.x=0;this.y=0;
    }

    public Point(int x, int y){
        this.x = x; this.y = y;
    }
}
