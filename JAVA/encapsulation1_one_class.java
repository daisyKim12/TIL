public class encapsulation1_one_class {
    public static void main(String[] args) {
        //make a sick patient instance
        Patient patient_one = new Patient();
        //patient takes pills
        patient_one.take_pill(new Pill());
    }
}


class Patient {
    void take_pill(Pill pill) {
        pill.take_by_order();
    }

}


class Pill {
    //sneeze_pill
    private void sneeze_pill() {
        System.out.println("no sneeze");
    }
    //throat_pill
    private void throat_pill() {
        System.out.println("no throat pain");
    }

    //eat pill by order
    void take_by_order() {
        sneeze_pill();
        throat_pill();
    }

}