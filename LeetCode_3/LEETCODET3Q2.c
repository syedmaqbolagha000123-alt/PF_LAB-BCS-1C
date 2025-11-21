#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *s)
{
    int left = 0;
    int right = strlen(s) - 1;

    while (left < right)
	{
        if (s[left] != s[right])
            return false;

        left++;
        right--;
    }

    return true;
}

char* firstPalindrome(char **words, int wordsSize)

{
	int i;
    for ( i = 0; i < wordsSize; i++) {
        if (isPalindrome(words[i])) {
            return words[i];  
        }
    }

    return "";  
}

int main()
 {
    char *words1[] = {"abc","car","ada","racecar","cool"};
    printf("%s\n", firstPalindrome(words1, 5));  

    char *words2[] = {"notapalindrome","racecar"};
    printf("%s\n", firstPalindrome(words2, 2));  

    char *words3[] = {"def","ghi"};
    printf("%s\n", firstPalindrome(words3, 2));  

    return 0;
}

