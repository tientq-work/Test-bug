public class ErrorJava2 {
    public static void main(String[] args) {
        String s = null;
        System.out.println(s.length());
        undeclaredMethod();
    }
}
