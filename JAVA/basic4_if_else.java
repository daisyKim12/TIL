class IfElseBasic {
    public static void main(String[] args){
        int num = 120;
        if(num < 0)
            System.out.println("less than 0");
        else if(num < 100)
            System.out.println("larger than 0 but less than 100");
        else
            System.out.println("larger than 100");
    }
}