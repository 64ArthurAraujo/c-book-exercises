int strcmp_array(char *s, char *t) {
    int i;

    for (i = 0; s[i] == t[i]; i++) {
        if (s[i] == '\0') {
            return 0;
        }
    }

    return s[i] - t[i];
}

int main() {
    char str1[] = "hello world";
    char str2[] = "hello lll";

    int diff = strcmp_array(str1, str2);

    return 0;
}