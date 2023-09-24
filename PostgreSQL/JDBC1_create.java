import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.Statement;
import java.sql.SQLException;
import java.sql.ResultSet;

public class JDBC1_create {

    public static void main(String[] args) {
        //JDBC_basic.testConnection("university", "daisy12", "dnjf1000");

        Statement stmt = JDBC_basic.createConnection("university", "daisy12", "dnjf1000");
        JDBC_basic.printStudent(stmt);
        //disConnection(conn, stmt);
    }
    
}



class JDBC_basic {
    public static void testConnection(String dbname, String userid, String passwd) {

        try {
            Connection conn = DriverManager.getConnection(
                "jdbc:postgresql://localhost/" + dbname, userid, passwd
            );
            Statement stmt = conn.createStatement();

            // add checking connection
            if (conn != null) {
                System.out.println("Connection successful!");
            } else {
                System.out.println("Connection failed.");
            }

            stmt.close();
            conn.close();
        } catch (SQLException sqle) {
            System.out.println("SQLException : " + sqle);
        }
    }


    public static Statement createConnection(String dbname, String userid, String passwd) {
    
        Statement stmt = null;

        try {
            Connection conn = DriverManager.getConnection(
                "jdbc:postgresql://localhost/" + dbname, userid, passwd
            );
            stmt = conn.createStatement();

            // add checking connection
            if (conn != null) {
                System.out.println("Connection successful!");
            } else {
                System.out.println("Connection failed.");
            }

        } catch (SQLException sqle) {
            System.out.println("SQLException : " + sqle);
        }

        return stmt;
    }

    public static Statement disConnection(Connection conn, Statement stmt) {
    
        try {
            stmt.close();
            conn.close();

        } catch (SQLException sqle) {
            System.out.println("SQLException : " + sqle);
        }
    }

    public static void printStudent(Statement stmt) {

        try {
            ResultSet rset = stmt.executeQuery(
                "select name from student"
            );
            while(rset.next()) {
                System.out.println(rset.getString(1));
            }
        } catch (SQLException sqle) {
            System.out.println("SQLException : " + sqle);
        }
    }
}
