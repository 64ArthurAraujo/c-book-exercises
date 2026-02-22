void strcpy_array(char *s, char *t) {
    int i = 0;

    while ((s[i] = t[i]) != '\0') {
        i++;
    }
}

void strcpy_pointer(char *s, char *t) {
    int i = 0;

    while ((*s++ = *t++))
        ;
}


int main() {
    char str1[] = "hello";
    char str2[] = "hello world";


    // strcpy_array(str1, str2);
    strcpy_pointer(str1, str2);
}