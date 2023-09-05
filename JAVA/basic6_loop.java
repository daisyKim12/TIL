class LoopBasic {
    public static void main(String[] args){
        int n = 0;
        while(n < 5) {
            System.out.println("while: I love Java");
            n = n + 1;
        }

        n = 0;
        do{
            System.out.println("do-while: I love Java");
            n = n + 1;
        } while(n < 5);

        for(int i = 0; i < 5; i++) {
            System.out.println("for: I love Java");
        }
    }
}