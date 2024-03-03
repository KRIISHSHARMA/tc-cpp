#include <stdio.h>
#include <stdbool.h>

void capital(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        }
    }
}

void conc(char s1[], const char s2[]) {
    int i = 0, j = 0;

    while (s1[i] != '\0') {
        i++; // Move to end of s1
    }

    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}

void add(char s1[], const char s2[], char a) {
    int i = 0, j = 0;

    while (s1[i] != a && s1[i] != '\0') {
        i++; // Move to the specified character or the end of s1
    }

    while (s2[j] != '\0') {
        s1[i] = s2[j];
        i++;
        j++;
    }

    s1[i] = '\0';
}



int stringLength(const char *str) {
    const char *ptr = str; // Initialize a pointer to the start of the string

    while (*ptr != '\0') {
        ptr++; // Move the pointer to the next character
    }

    // Calculate the length by subtracting the initial pointer position
    return ptr - str;
}

void reverse(char *str) {
    int length = stringLength(str);
    int start = 0;
    int end = length - 1;

    while (start < end) {
        // Swap characters at start and end positions
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        // Move towards the center
        start++;
        end--;
    }
}

int main() {
    int choice;
    printf("-------------------WELCOME----------------------\n");
    printf(" 1. lower to upper\n 2. concatenate 2 strings\n 3. compare 2 strings\n 4. calculate length of string\n 5. address\n 6. reverse\n 7. add string\n");
    // sleep(1);
    printf("WHAT DO YOU WANT TO DO? : ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("ENTER STRING: ");
            char str[100];
            scanf("%s", str);
            capital(str);
            printf("Converted to uppercase: %s\n", str);
            break;

        case 2:
            printf("ENTER STRING 1: ");
            char str1[100];
            scanf("%s", str1);

            printf("ENTER STRING 2: ");
            char str2[100];
            scanf("%s", str2);

            conc(str1, str2);
            printf("Concatenated string: %s\n", str1);
            break;

        case 3:
            printf("ENTER STRING 1: ");
            char st1[100];
            scanf("%s", st1);

            printf("ENTER STRING 2: ");
            char st2[100];
            scanf("%s", st2);
            
            int i = 0 ;
            while (st1[i] != '\0' && st2[i] != '\0') {
                if (st1[i] == st2[i]) {
                    i++;
                } else {
                    printf("NOPE\n");
                    return 0;
                }
            }

            if (st1[i] == '\0' && st2[i] == '\0') {
                printf("YES\n");
            } else {
                printf("NOPE\n");
            }
            break;
            
        case 4 :
            printf("ENTER STRING: ");
            char s[100];
            scanf("%s", s);
            printf("Length of string = %d" ,stringLength(s));
            break ;
        
        case 5:
            printf("ENTER STRING: ");
            char name[100];
            scanf("%s", name);
            int o = 0;
            while(name[o] != '\0'){
                printf("address of %c = %p\n",name[o],&name[o]);
                o++;
            }
            break;
        
        case 6:
            printf("ENTER STRING: ");
            char nam[100];
            scanf("%s", nam);
            reverse(nam);
            printf("reverse of string = %s",nam);
            
        case 7 :
            printf("ENTER STRING 1: ");
            char n1[100];
            scanf("%s", n1);

            printf("ENTER STRING 2: ");
            char n2[100];
            scanf("%s", n2);
            
            printf("enter string to add from : ");
            char a;
            scanf(" %c", &a);
            
            add(n1,n2,a);
            printf("new string: %s\n", n1);
            break;
            
        
    }

    return 0;
}
