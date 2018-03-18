public class main{
    public static void main(String[] args){
        int pay = 567890;
        int bill[] = {10000, 1000, 100, 10};
        int count[] = new int[4];
        String billName[] = {"man", "chun", "back", "sip"};

        count[0] = (pay/bill[0]); // edge-case
        for (int i = 1; i<bill.length; ++i){
            count[i] = (pay / bill[i]) % 10;
            System.out.println(count[i] + " " + billName[i]);
        }
    }
}
