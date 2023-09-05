class DuplicatingReference {
    public static void main(String[] args) {
        BankAccount ref1 = new BankAccount();
        BankAccount ref2 = ref1;

        ref1.deposit(3000);
        ref2.deposit(2000);

        ref1.checkMyBalance();
        ref2.checkMyBalance();
    }
}

class BankAccount {
    int balance = 0;

    public int deposit(int money) {
        balance += money;
        return balance;
    }
    
    public int checkMyBalance() {
        System.out.println("balance: " + balance);
        return balance;
    }
}