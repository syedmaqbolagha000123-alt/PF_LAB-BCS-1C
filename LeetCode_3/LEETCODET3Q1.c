#include <stdio.h>
#include <string.h>

int isVowel(char c)
 {
    return (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U');
}

char* reverseVowels(char* s)
 {
    int left = 0;
    int right = strlen(s) - 1;

    while(left < right)
	{
        while(left < right && !isVowel(s[left]))
		 left++;
        while(left < right && !isVowel(s[right]))
		right--;

        // swap vowels
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }

    return s;
}

int main() {
    char s1[] = "IceCreAm";
    char s2[] = "leetcode";

    printf("%s\n", reverseVowels(s1));  // AceCreIm
    printf("%s\n", reverseVowels(s2));  // leotcede

    return 0;
}

