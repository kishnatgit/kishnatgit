/**
 * exam1
 */
class shuffle_card {
    public void shuffle(int card[], int n) {

        java.util.Random rand = new java.util.Random();
        for (int i = 0; i < n; i++) {
            // Random for remaining positions.
            int r = i + rand.nextInt(n - i);

            // swapping the elements
            int temp = card[r];
            card[r] = card[i];
            card[i] = temp;
        }
        if (card[0] <= card[1] &&
                card[n - 2] <= card[n - 1]) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }

        for (int i = 0; i < n; i++)
            System.out.print(card[i] + " ");
    }
}

public class exam1 {

    public static void main(String[] args) {
        int N;
        java.util.Scanner sc = new java.util.Scanner(System.in);
        N = sc.nextInt();
        int P[] = new int[N];
        for (int x = 0; x < P.length; x++) {
            P[x] = sc.nextInt();
        }
        shuffle_card scf = new shuffle_card();
        scf.shuffle(P, N);
        sc.close();
    }
}