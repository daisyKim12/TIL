class Accessway {
    static int num = 0;

    Accessway() {
        incrCnt();
    }

    void incrCnt() {
        num ++;
    }

}


public class class4_static_variable {
    public static void main(String[]args) {
        Accessway way = new Accessway();

        way.num++;
        Accessway.num++;
        System.out.println("num = " + Accessway.num);
    }
}