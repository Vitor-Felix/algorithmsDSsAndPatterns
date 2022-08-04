import java.time.Instant;
import java.time.Duration;

public class f_linearSearch {
  public static void main(String[] args) {
    int[] unsortedNumbers = { 2, 3, 1, 10, 7, 8 };
    int target = 8;
    boolean found = false;

    Instant clockStart = Instant.now();
    for (int i = 0; i < unsortedNumbers.length; i++) {
      if (unsortedNumbers[i] == target) {
        found = true;
      }
    }
    Instant clockEnd = Instant.now();

    System.out.println(found);
    System.out.println("Elapsed time: " + Duration.between(clockEnd, clockStart).toString());
  }
}