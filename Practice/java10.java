/**
 * java10
 */
public class java10 {

    public static void main(String[] args) {
        int a = 0, b = 0, c = 0;
        String S = "timetopractice", P = "toc";
        for (int i = 0; i < S.length(); i++) {
            // System.out.println("Testing");
            if (S.charAt(i) == P.charAt(0)) {
                for (int j = i + 1; j < S.length() - i - 1; j++) {
                    if (S.charAt(j) == P.charAt(0)) { // t
                        for (int k = j + 1; k < S.length() - j - 1; k++) {
                            if (S.charAt(k) == P.charAt(1)) {
                                a = j;
                                // System.out.println(a);
                                b = k;
                                // System.out.println(b);
                                break;
                            } // b= 5, m=6 =p
                        }
                        for (int m = b + 1; m < S.length() - b - 1; m++) {
                            System.out.println(m);
                            if (S.charAt(m) == P.charAt(2)) {
                                System.out.println("Testing");
                                c = m;
                                System.out.println(c);
                                break;
                            }
                        }
                    }
                    if (c != 0)
                        break;
                }
            }
            if (c != 0)
                break;
        }
        System.out.println(a + " " + c);
        // String Final = S.substring(a, c);
        // System.out.println(Final);
    }
}