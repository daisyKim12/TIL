class BankAccountWithConstructor {
    public static void main(String[] args) {
        BankAccount ref1 = new BankAccount("12-23-98", "991111-909090");

        ref1.deposit(3000);

        ref1.checkMyBalance();
    }
}

class BankAccount {
    String accNumber;
    String ssNumber;
    int balance = 0;

    public BankAccount(String accNumber, String ssNumber) {
        this.accNumber = accNumber;
        this.ssNumber = ssNumber;
    }

    public int deposit(int money) {
        balance += money;
        return balance;
    }
    
    public int checkMyBalance() {
        System.out.println("account number: " + accNumber);
        System.out.println("social security number: " + ssNumber);
        System.out.println("balance: " + balance);
        return balance;
    }
}