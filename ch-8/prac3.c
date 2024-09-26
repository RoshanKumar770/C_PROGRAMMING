#include <stdio.h>
#include <string.h>

#define MAX 1000

void readStrings(char str[], char pat[], char rep[]) {
    printf("Enter the main string (STR): ");
    fgets(str, MAX, stdin);
    str[strlen(str) - 1] = '\0';  
    
    printf("Enter the pattern string (PAT): ");
    fgets(pat, MAX, stdin);
    pat[strlen(pat) - 1] = '\0';  

    printf("Enter the replace string (REP): ");
    fgets(rep, MAX, stdin);
    rep[strlen(rep) - 1] = '\0'; 
}

int findPattern(char str[], char pat[], int start) {
    int i = start, j = 0;
    while (str[i] != '\0' && pat[j] != '\0') {
        if (str[i] == pat[j]) {
            i++;
            j++;
        } else {
            i = i - j + 1;
            j = 0;
        }
    }
    if (pat[j] == '\0') {
        return i - j;  
    } else {
        return -1;  
    }
}

void replaceAllOccurrences(char str[], char pat[], char rep[]) {
    char result[MAX];
    int i = 0, j = 0, pos = 0, pat_len = strlen(pat), rep_len = strlen(rep);
    int found = 0;

    while (str[i] != '\0') {
        pos = findPattern(str, pat, i);
        if (pos == -1) {
            while (str[i] != '\0') {
                result[j++] = str[i++];
            }
            result[j] = '\0';
            break;
            while (i < pos) {
                result[j++] = str[i++];
            }
            for (int k = 0; k < rep_len; k++) {
                result[j++] = rep[k];
            }
            i += pat_len;
            found = 1;
        }
    }

    if (found) {
        result[j] = '\0';
        printf("Updated string: %s\n", result);
    } else {
        printf("Pattern not found in the string.\n");
    }
}

int main() {
    char str[MAX], pat[MAX], rep[MAX];
    

    readStrings(str, pat, rep);
    

    replaceAllOccurrences(str, pat, rep);
    
    return 0;
}
