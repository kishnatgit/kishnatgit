import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.function.*;
import java.util.regex.*;
import java.util.stream.*;
import static java.util.stream.Collectors.joining;
import static java.util.stream.Collectors.toList;

class Result {

    /*
     * Complete the 'sockMerchant' function below.
     *
     * The function is expected to return an INTEGER.
     * The function accepts following parameters:
     * 1. INTEGER n
     * 2. INTEGER_ARRAY ar
     */

    public static int sockMerchant(int n, List<Integer> ar) {
        // Write your code here
        Scanner sc = new Scanner(System.in);
        int j = 0, count = 0, pair = 0;
        boolean bl = true;
        for (int i = 0; i < n; i++) {
        ar.add(i, sc.nextInt());
        }

        

        for (j = 0; j < ar.size(); j++) {
            count = 0;
            bl = true;
            for (int z = 0; z < j; z++) {
                // System.out.println("Testing1!");
                if (ar.get(z) == ar.get(j))
                    bl = false;
            }
            if (bl) {
                for (int i = j + 1; i < ar.size(); i++) {
                    if (ar.get(i) == ar.get(j)) {
                        // System.out.println("Testing2!");
                        count++;
                        // System.out.println("Count" + count);
                    }
                }
                if (count > 1)
                    pair = pair + count;
                // System.out.println("Pair=" + pair);
            }
        }
        if (pair % 2 != 0)
            pair = (pair + 1) / 2;
        else
            pair = pair / 2;
        sc.close();
        return pair;
    }
}

public class java11 {
    public static void main(String[] args) throws IOException {
        // BufferedReader bufferedReader = new BufferedReader(new
        // InputStreamReader(System.in));
        // BufferedWriter bufferedWriter = new BufferedWriter(new
        // FileWriter(System.getenv("OUTPUT_PATH")));

        // int n = Integer.parseInt(bufferedReader.readLine().trim());

        // List<Integer> ar = Stream.of(bufferedReader.readLine().replaceAll("\\s+$",
        // "").split(" "))
        // .map(Integer::parseInt)
        // .collect(toList());
        int n = 10;
        List<Integer> ar = new ArrayList();

        int result = Result.sockMerchant(n, ar);

        System.out.println(result);
        // bufferedWriter.write(String.valueOf(result));
        // bufferedWriter.newLine();

        // bufferedReader.close();
        // bufferedWriter.close();
    }
}
