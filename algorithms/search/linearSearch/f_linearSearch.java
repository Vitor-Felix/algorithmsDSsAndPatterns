public class f_linearSearch {
  public static void main(String[] args) {
    int[] unsortedNumbers = { 2, 3, 1, 10, 7, 8 };
    int target = 100;
    boolean found = false;

    for (int i = 0; i < unsortedNumbers.length; i++) {
      if (unsortedNumbers[i] == target) {
        found = true;
      }
    }
    System.out.println(found);
  }
}