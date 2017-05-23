class book{
    int number=0;
    String owner_name="";

    public book(int number, String owner_name){
        this.number = number;
        this.owner_name = owner_name;
    }

    public book(){
        System.out.println("book created without argument");
        this.number=0;
        this.owner_name = owner_name;
    }

    public void print_info(){
        System.out.println("number is " + this.number);
        System.out.println("owner_name is " + this.owner_name);

    }
}
