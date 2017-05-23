class main{
    public static void main(String args[]){
        System.out.println("hello world");

        //book bk1 = new book(1, "bob");
        //book bk2 = new book(2, "Kub");

        book bk1, bk2;
        bk1.number = 1;
        bk1.owner_name = "bob";
        bk2.number = 2;
        bk2.owner_name = "Kub";

        swap_book_owner(bk1, bk2);

        bk1.print_info();
        bk2.print_info();

    }

    public static void swap_book_owner(book a, book b){
        String t = a.owner_name;
        a.owner_name = b.owner_name;
        b.owner_name = t;
    }
}
