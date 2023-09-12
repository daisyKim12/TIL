public class encapsulation2_inclusion {
    public static void main(String[] args) {
        //make a sick patient instance
        Patient patient_one = new Patient();
        //patient takes pills
        patient_one.take_pill(new PillSet());
    }
}


class Patient {
    void take_pill(PillSet pill_set) {
        pill_set.take_by_order();
    }

}


class PillSet {

    private SneezePill sneeze_pill = new SneezePill();
    private ThroatPill throat_pill = new ThroatPill();

    //eat pill by order
    void take_by_order() {
        sneeze_pill.take();
        throat_pill.take();
    }
}

class SneezePill {
    void take() {
        System.out.println("no sneeze");
    }
}

class ThroatPill {
    void take() {
        System.out.println("no throat pain");
    }
}