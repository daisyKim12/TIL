class Man {
    String name;
    public Man(String name){
        this.name = name;
    }

    public void tellName(){
        System.out.println("name: " + name);
    }
}

class BusinessMan extends Man {
    String company;
    String position;

    public BusinessMan(String name, String company, String position) {
        super(name);
        this.company = company;
        this.position = position;
    }

    public void tellInfo(){
        tellName();
        System.out.println("company: " + company);
        System.out.println("position: " + position);
    }
}


public class inheritance1_basic {
    public static void main(String[] args) {
        BusinessMan man = new BusinessMan("Yoon", "Hybrid LED", "Staff Eng.");
        man.tellInfo();
    }
}