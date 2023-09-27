import java.sql.Connection;
import java.sql.SQLException;
import java.sql.Statement;
import java.sql.ResultSet;
import java.sql.DriverManager;
import java.time.LocalDateTime;
import java.time.format.DateTimeFormatter;
import java.text. *;
import java.util. *;

public class Auction {
        private static Scanner scanner = new Scanner(System.in);

        enum Category {
                ELECTRONICS,
                CLOTHING,
                SPORTINGGOODS,
                OTHERS
        }
        enum Condition {
                NEW,
                LIKE_NEW,
                GOOD,
                ACCEPTABLE
        }

        private static boolean LoginMenu() {
                String userpass, isAdmin;

                System.out.print("----< User Login >\n" +
                                " ** To go back, enter 'back' in user ID.\n" +
                                "     user ID: ");
                try{
                        username = scanner.next();
                        scanner.nextLine();

                        if(username.equalsIgnoreCase("back")){
                                return false;
                        }

                        scanner.nextLine();
                }catch (java.util.InputMismatchException e) {
                        username = null;
                        return false;
                }

                /* Your code should come here to check ID and password */

                if (false) {
                        /* If Login Fails */
                        return false;
                }

                System.out.println("You are successfully logged in.\n");
                return true;
        }

        private static boolean SellMenu() {
                Category category;
                Condition condition;
                char choice;
                int price;
                boolean flag_catg = true, flag_cond = true;

                                        "----< Sell Item >\n" +
                                        "---- Choose a category.\n" +
                                        "    1. Electronics\n" +
                                        "    4. Clothing\n" +
                                        "    5. Sporting Goods\n" +
                                        );

                        try {
                                continue;
                        }

                        flag_catg = true;
                                case '1':
                                        category = Category.ELECTRONICS;
                                        continue;
                                case '2':
                                        category = Category.BOOKS;
                                        continue;
                                case '3':
                                        category = Category.HOME;
                                        continue;
                                case '4':
                                        category = Category.CLOTHING;
                                        continue;
                                case '5':
                                        category = Category.SPORTINGGOODS;
                                        continue;
                                case '6':
                                        category = Category.OTHERS;
                                        continue;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_catg = false;
                                        continue;
                        }
                }while(!flag_catg);

                do{
                        System.out.println(
                                        "---- Select the condition of the item to sell.\n" +
                                        "   1. New\n" +
                                        "   2. Like-new\n" +
                                        "   3. Used (Good)\n" +
                                        "   4. Used (Acceptable)\n" +
                                        "   P. Go Back to Previous Menu"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        }catch (java.util.InputMismatchException e) {
                                case '1':
                                        category = Category.ELECTRONICS;
                                        continue;
                                case '2':
                                        category = Category.BOOKS;
                                        continue;
                                case '3':
                                        category = Category.HOME;
                                        continue;
                                case '4':
                                        category = Category.CLOTHING;
                                        continue;
                                case '5':
                                        category = Category.SPORTINGGOODS;
                                        continue;
                                case '6':
                                        category = Category.OTHERS;
                                        continue;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_catg = false;
                                        continue;
                        }
                }while(!flag_catg);

                do{
                        System.out.println(
                                        "---- Select the condition of the item too sell.\n" +
                                        "   1. New\n" +
                                        "   2. Like-new\n" +
                                        "   3. Used (Good)\n" +
                                        "   4. Used (Acceptable)\n" +
                                        "   P. Go Back to Previous Menu"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        }catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                                               134,4-25      15%
                                case '1':
                                        category = Category.ELECTRONICS;
                                        continue;
                                case '2':
                                        category = Category.BOOKS;
                                        continue;
                                case '3':
                                        category = Category.HOME;
                                        continue;
                                case '4':
                                        category = Category.CLOTHING;
                                        continue;
                                case '5':
                                        category = Category.SPORTINGGOODS;
                                        continue;
                                case '6':
                                        category = Category.OTHERS;
                                        continue;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_catg = false;
                                        continue;
                        }
                }while(!flag_catg);

                do{
                        System.out.println(
                                        "---- Select the condition of the item to sell.\n" +
                                        "   1. New\n" +
                                        "   2. Like-new\n" +
                                        "   3. Used (Good)\n" +
                                        "   4. Used (Acceptable)\n" +
                                        "   P. Go Back to Previous Menu"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        }catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                continue;
                        }

                                        category = Category.ELECTRONICS;
                                        continue;
                                case '2':
                                        category = Category.BOOKS;
                                        continue;
                                case '3':
                                        category = Category.HOME;
                                        continue;
                                case '4':
                                        category = Category.CLOTHING;
                                        continue;
                                case '5':
                                        category = Category.SPORTINGGOODS;
                                        continue;
                                case '6':
                                        category = Category.OTHERS;
                                        continue;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_catg = false;
                                        continue;
                        }
                }while(!flag_catg);

                do{
                        System.out.println(
                                        "---- Select the condition of the item to sell.\n" +
                                        "   1. New\n" +
                                        "   2. Like-new\n" +
                                        "   3. Used (Good)\n" +
                                        "   4. Used (Acceptable)\n" +
                                        "   P. Go Back to Previous Menu"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        }catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                continue;
                        }

                                case '1':
                                        category = Category.ELECTRONICS;
                                        continue;
                                case '2':
                                        category = Category.BOOKS;
                                        continue;
                                case '3':
                                        category = Category.HOME;
                                        continue;
                                case '4':
                                        category = Category.CLOTHING;
                                        continue;
                                case '5':
                                        category = Category.SPORTINGGOODS;
                                        continue;
                                case '6':
                                        category = Category.OTHERS;
                                        continue;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_catg = false;
                                        continue;
                        }
                }while(!flag_catg);

                do{
                        System.out.println(
                                        "---- Select the condition of the item to sell.\n" +
                                        "   1. New\n" +
                                        "   2. Like-new\n" +
                                        "   3. Used (Good)\n" +
                                        "   4. Used (Acceptable)\n" +
                                        "   P. Go Back to Previous Menu"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        }catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                continue;
                        }

                        flag_cond = true;

                        switch (choice) {
                                case '1':
                                        condition = Condition.NEW;
                                        break;
                                case '2':
                                        condition = Condition.LIKE_NEW;
                                        break;
                                case '3':
                                        condition = Condition.GOOD;
                                        break;
                                case '4':
                                        condition = Condition.ACCEPTABLE;
                                        break;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_cond = false;
                                        continue;
                        }
                }while(!flag_cond);

                try {
                        System.out.println("---- Description of the item (one line): ");
                        String description = scanner.nextLine();
                        System.out.println("---- Buy-It-Now price: ");

                        while (!scanner.hasNextInt()) {
                                scanner.next();
                                System.out.println("Invalid input is entered. Please enter Buy-It-Now price: ");
                        }

                        price = scanner.nextInt();
                        scanner.nextLine();

                        System.out.print("---- Bid closing date and time (YYYY-MM-DD HH:MM): ");
                        // you may assume users always enter valid date/time
                        String date = scanner.nextLine();  /* "2023-03-04 11:30"; */
                        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yyyy-MM-dd HH:mm");
                        LocalDateTime dateTime = LocalDateTime.parse(date, formatter);
                }catch (Exception e) {
                        System.out.println("Error: Invalid input is entered. Going back to the previous menu.");
                        return false;
                }

                /* TODO: Your code should come here to store the user inputs in your database */

                System.out.println("Your item has been successfully listed.\n");
                return true;
        }

        private static boolean SignupMenu() {
                /* 2. Sign Up */
                String new_username, userpass, isAdmin;
                System.out.print("----< Sign Up >\n" +
                                " ** To go back, enter 'back' in user ID.\n" +
                                "---- user name: ");
                try {
                        new_username = scanner.next();
                        scanner.nextLine();
                        if(new_username.equalsIgnoreCase("back")){
                                return false;
                        }
                        System.out.print("---- password: ");
                        userpass = scanner.next();
                        scanner.nextLine();
                        System.out.print("---- In this user an administrator? (Y/N): ");
                        isAdmin = scanner.next();
                        scanner.nextLine();
                } catch (java.util.InputMismatchException e) {
                        System.out.println("Error: Invalid input is entered. Please select again.");
                        return false;
                }

                /* TODO: Your code should come here to create a user account in your database */

                System.out.println("Your account has been successfully created.\n");
                return true;
        }

        private static boolean AdminMenu() {
                /* 3. Login as Administrator */
                char choice;
                String adminname, adminpass;
                String keyword, seller;
                System.out.print("----< Login as Administrator >\n" +
                                " ** To go back, enter 'back' in user ID.\n" +
                        scanner.nextLine();
                        adminpass = scanner.nextLine();
                        // TODO: check the admin's account and password.
                } catch (java.util.InputMismatchException e) {
                        System.out.println("Error: Invalid input is entered. Try again.");
                        return false;
                if(!login_success){
                do {
                        System.out.println(
                                        "    4. Print Buyer Ranking \n" +
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        } catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                continue;
                        }

                        if (choice == '1') {
                                System.out.println("----Enter Category to search : ");
                                keyword = scanner.next();
                                scanner.nextLine();
                                /*TODO: Print Sold Items per Category */
                                /*
                                   while(rset.next()){
                                   }
                                 */
                                continue;
                        } else if (choice == '2') {
                                /*TODO: Print Account Balance for Seller */
                                System.out.println("---- Enter Seller ID to search : ");
                                seller = scanner.next();
                                scanner.nextLine();
                                /*
                                   while(rset.next()){
                                   }
                                 */
                                continue;
                        } else if (choice == '3') {
                                /*TODO: Print Seller Ranking */
                                /*
                                   while(rset.next()){
                                   }
                                 */
                                continue;
                        } else if (choice == '4') {
                                /*TODO: Print Buyer Ranking */
                                System.out.println("buyer ID   | # of items purchased | Total Money Spent ");
                                System.out.println("------------------------------------------------------");
                                /*
                                   while(rset.next()){
                                   }
                                 */
                                continue;
                        } else if (choice == 'P' || choice == 'p') {
                                return false;
                        } else {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                continue;
                        }
                } while(true);
        }

        public static void CheckSellStatus(){
                /* TODO: Check the status of the item the current user is selling */

                System.out.println("item listed in Auction | bidder (buyer ID) | bidding price | bidding date/time \n");
                System.out.println("-------------------------------------------------------------------------------\n");
                /*
                   while(rset.next(){
                   System.out.println();
                   }
                 */
        }

        public static boolean BuyItem(){
                Category category;
                Condition condition;
                char choice;
                int price;
                String keyword, seller, datePosted;
                boolean flag_catg = true, flag_cond = true;

                do {

                        System.out.println( "----< Select category > : \n" +
                                        "    1. Electronics\n"+
                                        "    2. Books\n" +
                                        "    3. Home\n" +
                                        "    4. Clothing\n" +
                                        "    5. Sporting Goods\n" +
                                        "    6. Other categories\n" +
                                        "    7. Any category\n" +
                                        "    P. Go Back to Previous Menu"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        } catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                return false;
                        }

                        flag_catg = true;

                        switch (choice) {
                                case '1':
                                        category = Category.ELECTRONICS;
                                        break;
                                case '2':
                                        category = Category.BOOKS;
                                        break;
                                case '3':
                                        category = Category.HOME;
                                        break;
                                case '4':
                                        category = Category.CLOTHING;
                                        break;
                                case '5':
                                        category = Category.SPORTINGGOODS;
                                        break;
                                case '6':
                                        category = Category.OTHERS;
                                        break;
                                case '7':
                                        break;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_catg = false;
                                        continue;
                        }
                } while(!flag_catg);

                do {

                        System.out.println(
                                        "----< Select the condition > \n" +
                                        "   1. New\n" +
                                        "   2. Like-new\n" +
                                        "   3. Used (Good)\n" +
                                        "   4. Used (Acceptable)\n" +
                                        "   P. Go Back to Previous Menu"
                                        );
                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        } catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                return false;
                        }

                        flag_cond = true;

                        switch (choice) {
                                case '1':
                                        condition = Condition.NEW;
                                case '3':
                                        break;
                                case 'p':
                                case 'P':
                                        return false;
                                default:
                                        System.out.println("Error: Invalid input is entered. Try again.");
                                        flag_cond = false;
                                        continue;
                                }
                } while(!flag_cond);

                try {
                        System.out.println("---- Enter keyword to search the description : ");
                        keyword = scanner.next();
                        scanner.nextLine();

                        System.out.println("---- Enter Seller ID to search : ");
                        System.out.println(" ** Enter 'any' if you want to see items from any seller. ");
                        seller = scanner.next();
                        scanner.nextLine();

                        System.out.println("---- Enter date posted (YYYY-MM-DD): ");
                        System.out.println(" ** This will search items that have been posted after the designated date.");
                        datePosted = scanner.next();
                        scanner.nextLine();
                        return false;
                /* TODO: Query condition: items whose description match the keyword (use LIKE operator) */
                /*
                   while(rset.next()){
                   }
                 */

                System.out.println("---- Select Item ID to buy or bid: ");

                try {
                        choice = scanner.next().charAt(0);;
                        scanner.nextLine();
                        System.out.println("     Price: ");
                        price = scanner.nextInt();
                        scanner.nextLine();
                } catch (java.util.InputMismatchException e) {
                        System.out.println("Error: Invalid input is entered. Try again.");
                        return false;
                }

                /* TODO: Buy-it-now or bid: If the entered price is higher or equal to Buy-It-Now price, the bid ends. */
                /* Even if the bid price is higher than the Buy-It-Now price, the buyer pays the B-I-N price. */

                /* TODO: if you won, print the following */
                System.out.println("Congratulations, the item is yours now.\n");
                /* TODO: if you are the current highest bidder, print the following */
                System.out.println("Congratulations, you are the highest bidder.\n");
                return true;
        }

        public static void CheckBuyStatus(){
                /* TODO: Check the status of the item the current buyer is bidding on */

                /*
                   while(rset.next(){
                   System.out.println();
                   }
                 */
        }

        public static void CheckAccount(){
                /* TODO: Check the balance of the current user.  */
                System.out.println("[Sold Items] \n");
                System.out.println("item category  | item ID   | sold date | sold price  | buyer ID | commission  ");
                System.out.println("------------------------------------------------------------------------------");
                /*
                   while(rset.next(){
                   System.out.println();
                   }
                 */
                System.out.println("[Purchased Items] \n");
                System.out.println("item category  | item ID   | purchased date | puchased price  | seller ID ");
                System.out.println("--------------------------------------------------------------------------");
                /*
                   while(rset.next(){
                   System.out.println();
                   }
                 */
        }

        public static void main(String[] args) {
                char choice;
                boolean ret;

                if(args.length<2){
                        System.out.println("Usage: java Auction postgres_id password");
                        System.exit(1);
                }


                try{
            //          conn = DriverManager.getConnection("jdbc:postgresql://localhost/"+args[0], args[0], args[1]);
            Connection conn = DriverManager.getConnection("jdbc:postgresql://localhost/bnam", "bnam", "changethis");
                }
                catch(SQLException e){
                        System.out.println("SQLException : " + e);
                        System.exit(1);
                }

                do {
                        username = null;
                        System.out.println(
                                        "----< Login menu >\n" +
                                        "----(1) Login\n" +
                                        "----(2) Sign up\n" +
                                        "----(3) Login as Administrator\n" +
                                        "----(Q) Quit"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        } catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                continue;
                        }

                        try {
                                switch ((int) choice) {
                                        case '1':
                                                ret = LoginMenu();
                                                if(!ret) continue;
                                                break;
                                        case '2':
                                                ret = SignupMenu();
                                                if(!ret) continue;
                                                break;
                                        case '3':
                                                ret = AdminMenu();
                                                if(!ret) continue;
                                        case 'q':
                                        case 'Q':
                                                System.out.println("Good Bye");
                                                /* TODO: close the connection and clean up everything here */
                                                conn.close();
                                                System.exit(1);
                                        default:
                                                System.out.println("Error: Invalid input is entered. Try again.");
                                }
                        } catch (SQLException e) {
                                System.out.println("SQLException : " + e);
                        }
                } while (username==null || username.equalsIgnoreCase("back"));

                // logged in as a normal user
                do {
                        System.out.println(
                                        "---< Main menu > :\n" +
                                        "----(1) Sell Item\n" +
                                        "----(2) Status of Your Item Listed on Auction\n" +
                                        "----(3) Buy Item\n" +
                                        "----(4) Check Status of your Bid \n" +
                                        "----(5) Check your Account \n" +
                                        case '1':
                                                ret = LoginMenu();
                                                if(!ret) continue;
                                                break;
                                        case '2':
                                                ret = SignupMenu();
                                                if(!ret) continue;
                                                break;
                                        case '3':
                                                ret = AdminMenu();
                                                if(!ret) continue;
                                        case 'q':
                                        case 'Q':
                                                System.out.println("Good Bye");
                                                /* TODO: close the connection and clean up everything here */
                                                conn.close();
                                                System.exit(1);
                                        default:
                                                System.out.println("Error: Invalid input is entered. Try again.");
                                }
                        } catch (SQLException e) {
                                System.out.println("SQLException : " + e);
                        }
                } while (username==null || username.equalsIgnoreCase("back"));

                // logged in as a normal user
                do {
                        System.out.println(
                                        "---< Main menu > :\n" +
                                        "----(1) Sell Item\n" +
                                        "----(2) Status of Your Item Listed on Auction\n" +
                                        "----(3) Buy Item\n" +
                                        "----(4) Check Status of your Bid \n" +
                                        "----(5) Check your Account \n" +
                                        "----(Q) Quit"
                                        );

                        try {
                                choice = scanner.next().charAt(0);;
                                scanner.nextLine();
                        } catch (java.util.InputMismatchException e) {
                                System.out.println("Error: Invalid input is entered. Try again.");
                                continue;
                        }

                        try{
                                switch (choice) {
                                        case '1':
                                                ret = SellMenu();
                                                if(!ret) continue;
                                                break;
                                        case '2':
                                                CheckSellStatus();
                                                break;
                                        case '3':
                                                ret = BuyItem();
                                                if(!ret) continue;
                                                break;
                                        case '4':
                                                CheckBuyStatus();
                                                break;
                                        case '5':
                                                CheckAccount();
                                                break;
                                        case 'q':
                                        case 'Q':
                                                System.out.println("Good Bye");
                                                /* TODO: close the connection and clean up everything here */
                                                conn.close();
                                                System.exit(1);
                                }
                        } catch (SQLException e) {
                                System.out.println("SQLException : " + e);
                                System.exit(1);
                        }
                } while(true);
        } // End of main
} // End of class