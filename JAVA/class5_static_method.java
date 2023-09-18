class NumberPrinter {
    private int myNumber = 0;

    static void showInt(int n) {
        System.out.println(n);
    }

    static void showDouble(double d) {
        System.out.println(d);
    }

    void setMyNumber(int n) {
        myNumber = n;
    }

    void showMyNumber(){
        System.out.println(myNumber);
    }
}


public class class5_static_method {
    public static void main(String[] args) {
        NumberPrinter.showInt(20);

        NumberPrinter np = new NumberPrinter();
        np.showDouble(3.15);
        np.setMyNumber(35);
        np.showMyNumber();
    }
}