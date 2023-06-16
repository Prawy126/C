#include <stdio.h>
#include <stdlib.h>

typedef enum {
    INT,
    FLOAT,
    CHAR
} var_type;

struct var {
    var_type type;
    union {
        int intValue;
        float floatValue;
        char charValue;
    };
};

void setInt(struct var* variable, int value) {
    variable->type = INT;
    variable->intValue = value;
}

void setFloat(struct var* variable, float value) {
    variable->type = FLOAT;
    variable->floatValue = value;
}

void setChar(struct var* variable, char value) {
    variable->type = CHAR;
    variable->charValue = value;
}

char* varToString(struct var variable) {
    char* str = (char*)malloc(20 * sizeof(char));

    switch (variable.type) {
        case INT:
            sprintf(str, "%d", variable.intValue);
            break;
        case FLOAT:
            sprintf(str, "%.2f", variable.floatValue);
            break;
        case CHAR:
            sprintf(str, "%c", variable.charValue);
            break;
    }

    return str;
}

int main() {
    struct var var1[10];
    for (size_t i = 0; i < 10; i++) {
        setInt(&var1[i], i + 1);
    }

    setChar(&var1[0], 'A');
    setChar(&var1[1], 'B');
    setChar(&var1[2], 'C');

    for (size_t i = 0; i < 10; i++) {
        char* str = varToString(var1[i]);
        printf("%s", str);
        free(str);
   
    }
}