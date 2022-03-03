public class ForBattle {
    public static void main(String args[]) {
        long start = System.currentTimeMillis();
        long result = 0;
        for (int i = 0; i < 1000000001; i++) {
            result += i;
            
        }
        System.out.println(result);
        long end = System.currentTimeMillis();
        long time_taken = (end - start);
        System.out.println(time_taken);
    }
}