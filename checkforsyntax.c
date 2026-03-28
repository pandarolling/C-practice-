#include <stdio.h>

int main() {
    int c;
    int paren = 0, brack = 0, brace = 0;
    int s_quote = 0, d_quote = 0, comment = 0;
    int prev = 0;

    while ((c = getchar()) != EOF) {
        if (comment) {
            if (prev == '*' && c == '/')
                comment = 0;
        } 
        else if (s_quote) {
            if (c == '\'' && prev != '\\')
                s_quote = 0;
        } 
        else if (d_quote) {
            if (c == '"' && prev != '\\')
                d_quote = 0;
        } 
        else {
            if (prev == '/' && c == '*')
                comment = 1;
            else if (c == '\'')
                s_quote = 1;
            else if (c == '"')
                d_quote = 1;
            else if (c == '(')
                paren++;
            else if (c == ')')
                paren--;
            else if (c == '[')
                brack++;
            else if (c == ']')
                brack--;
            else if (c == '{')
                brace++;
            else if (c == '}')
                brace--;
        }
        prev = c;
    }

    if (paren || brack || brace)
        printf("Syntax error: unmatched symbols\n");
    else
        printf("Syntax appears balanced\n");

    return 0;
}