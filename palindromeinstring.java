/*find palindrome in longest string

Input:
nayannamantenet 
output:
nayan
naman
tenet

input: 
aaaaa

output:
a
a
aaa
*/
import java.util.Scanner;

public class PalindromeSplit {

    // Method to check if a string is a palindrome
    public static boolean isPalindrome(String s) {
        String reversed = new StringBuilder(s).reverse().toString();
        return s.equals(reversed);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.next(); // Take the input string
        
        int l = s.length();
        
        // Try splitting the string into three palindromes
        for (int i = 1; i < l - 1; i++) {
            String s1 = s.substring(0, i);  // First part of the string
            if (isPalindrome(s1)) {         // Check if s1 is a palindrome
                for (int j = i + 1; j < l; j++) {
                    String s2 = s.substring(i, j);  // Second part of the string
                    String s3 = s.substring(j);    // Third part of the string
                    if (isPalindrome(s2) && isPalindrome(s3)) {
                        // If all three parts are palindromes, print them
                        System.out.println(s1);
                        System.out.println(s2);
                        System.out.println(s3);
                        return;  // Exit if we find a valid split
                    }
                }
            }
        }
        
        // If no solution is found, print "Impossible"
        System.out.println("Impossible");
    }
}
