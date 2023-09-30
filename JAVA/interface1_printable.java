interface Printable {
    public void print(String doc);
}

class PrintDriver implements Printable {
    @Override
    public void print(String doc) {
        System.out.println("doc: " + doc);
    }
}

class interface1_printable {
    public static void main(String[] args) {
        String myDoc = "This is a report of ...";

        Printable pa = new PrintDriver();
        pa.print(myDoc);
    
    }
}