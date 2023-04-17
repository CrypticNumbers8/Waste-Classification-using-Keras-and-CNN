public class Example {
    private static String password = "mypassword123";
    
    public static void main(String[] args) {
        //Security vulnerability - Plaintext password stored in a variable
        System.out.println("My password is: " + password);
        
        //Performance issue - Using a loop to concatenate Strings
        String result = "";
        for (int i = 0; i < 1000; i++) {
            result += "a";
        }
        System.out.println(result);
        
        //Best practices violation - Naming convention for variables
        int x = 10;
        int y = 5;
        int my_variable = x + y;
        System.out.println(my_variable);
        
        //Syntax error - Missing closing parenthesis
        if (x == 10 {
            System.out.println("x is 10");
        }
    }
}