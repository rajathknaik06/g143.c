/*Bob is working on a text analysis tool and needs your help in developing a program that classifies characters in a given string. The program should count the number of vowels, consonants, digits, and special characters in the input string.

Input format :
The input consists of a String, representing the text in which the counts of vowels, consonants, digits, and special characters will be determined.

Output format :
The first line of output prints "Vowels: " followed by an integer representing the count of vowels in the input string.

The second line prints "Consonants: " followed by an integer representing the count of consonants in the input string.

The third line prints "Digits: " followed by an integer representing the count of digits in the input string.

The fourth line prints "Special Characters: " followed by an integer representing the count of special characters in the input string.

*/

#include<stdio.h>

int main() {
    char str[150];
    int i, vowels, consonants, digits, symbols;
    vowels = consonants = digits = symbols = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; ++i) {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u' || str[i] == 'A' ||
           str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
           str[i] == 'U') {
            ++vowels;
        } else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            ++consonants;
        } else if(str[i] >= '0' && str[i] <= '9') {
            ++digits;
        } else {
            ++symbols;
        }
    }

    printf("Vowels: %d", vowels);
    printf("\nConsonants: %d", consonants);
    printf("\nDigits: %d", digits);
    printf("\nSpecial Characters: %d", symbols);

    return 0;
}


//another method


import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String str;
        int vowels = 0, consonants = 0, digits = 0, symbols = 0;

        str = sc.next();

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);

            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                vowels++;
            } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                consonants++;
            } else if (ch >= '0' && ch <= '9') {
                digits++;
            } else {
                symbols++;
            }
        }

        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);
        System.out.println("Digits: " + digits);
        System.out.print("Special Characters: " + symbols);

        sc.close();
    }
}
