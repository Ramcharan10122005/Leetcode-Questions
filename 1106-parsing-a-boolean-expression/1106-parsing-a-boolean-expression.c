char evaluate(char stack[], int* tos) {
    bool has_true = false;
    bool has_false = false;

    while (stack[*tos] != '&' && stack[*tos] != '!' && stack[*tos] != '|') {
        if (stack[*tos] == 't')
            has_true = true;
        else if (stack[*tos] == 'f')
            has_false = true;

        (*tos)--;
    }

    char result = 'f';
    if (stack[*tos] == '&') {
        if (!has_false)
            result = 't';
    } else if (stack[*tos] == '!') {
        if (has_false)
            result = 't';
    } else {
        if (has_true)
            result = 't';
    }

    (*tos)--;
    return result;
}

bool parseBoolExpr(char* expression) {
    char stack[2001] = {0};
    int tos = -1;

    int len = strlen(expression);
    for (int i = 0; i < len; i++) {
        char ch = expression[i];
        if (ch != ')' && ch != '(' && ch != ',') {
            stack[++tos] = ch;
        }
        if (ch == ')') {
            char temp = evaluate(stack, &tos);
            stack[++tos] = temp;
        }
    }

    return (tos >= 0 && stack[tos] == 't');
}
