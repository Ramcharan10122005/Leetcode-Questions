bool strongPasswordCheckerII(char* p) {
    bool len = false, lower = false, upper = false, digit = false,
         special = false, adj = true;
    if (strlen(p) >= 8)
        len = true;
    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] >= 'a' && p[i] <= 'z')
            lower = true;
        else if (p[i] >= 'A' && p[i] <= 'Z')
            upper = true;
        else if (p[i] >= '0' && p[i] <= '9')
            digit = true;
        else if (p[i] >= 'a' && p[i] <= 'z')
            lower = true;
        else if (p[i] == '!' || p[i] == '@' || p[i] == '#' || p[i] == '$' ||
                 p[i] == '%' || p[i] == '^' || p[i] == '&' || p[i] == '*' ||
                 p[i] == '(' || p[i] == ')' || p[i] == '-' || p[i] == '+')
            special = true;
        if (i > 0 && p[i] == p[i - 1])
            adj = false;
    }
    return len && lower && upper && digit && special && adj;
}