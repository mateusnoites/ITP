#include <stdio.h>

int check_line(int matrix[9][9], short line) {
    short found_numbers[10] = {0};

    for (short col = 0; col < 9; col ++) {
        int value = matrix[line][col];

        if (value >= 1 && value <= 9)
            found_numbers [value] = 1;
        else
            return 0;
    }

    for (int i = 1; i <= 9; i++) {
        if (found_numbers[i] == 0) return 0;
    }

    return 1;
}

int check_column(int matrix[9][9], short col) {
    short found_numbers[10] = {0};

    for (short line = 0; line < 9; line ++) {
        int value = matrix[line][col];

        if (value >= 1 && value <= 9)
            found_numbers [value] = 1;
        else
            return 0;
    }

    for (int i = 1; i <= 9; i++) {
        if (found_numbers[i] == 0) return 0;
    }

    return 1;
}

int check_one_group(int matrix[9][9], short start_line, short end_line, short start_col, short end_col) {
    short found_numbers[10] = {0};

    for (short line = start_line; line <= end_line; line++) {
        for (short col = start_col; col <= end_col; col++) {
            int value = matrix[line][col];
            if (value >= 1 && value <= 9)
                found_numbers[value] = 1;
            else
                return 0;
        }

    }

    for (int i = 1; i <= 9; i++) {
        if (found_numbers[i] == 0) return 0;
    }

    return 1;
}

int check_groups(int matrix[9][9]) {
    short group = 1;

    while (group <= 9) {
        switch (group) {
            case 1:
                if (!check_one_group(matrix, 0, 2, 0, 2)) return 0;
                break;
            case 2:
                if (!check_one_group(matrix, 0, 2, 3, 5)) return 0;
                break;
            case 3:
                if (!check_one_group(matrix, 0, 2, 6, 8)) return 0;
                break;
            case 4:
                if (!check_one_group(matrix, 3, 5, 0, 2)) return 0;
                break;
            case 5:
                if (!check_one_group(matrix, 3, 5, 3, 5)) return 0;
                break;
            case 6:
                if (!check_one_group(matrix, 3, 5, 6, 8)) return 0;
                break;
            case 7:
                if (!check_one_group(matrix, 6, 8, 0, 2)) return 0;
                break;
            case 8:
                if (!check_one_group(matrix, 6, 8, 3, 5)) return 0;
                break;
            case 9:
                if (!check_one_group(matrix, 6, 8, 6, 8)) return 0;
                break;
        }

        group++;
    }

    return 1;
}

int main() {
    int matrix[9][9];
    int times;

    scanf("%d", &times);
    for (int instance = 1; instance <= times; instance++) {
        int valid = 1;

        for (short i = 0; i < 9; i++) {
            for (short j = 0; j < 9; j++)
                scanf(" %d", &matrix[i][j]);
        }

        for (int i = 0; i < 9; i++) {
            if (!(check_line(matrix, i) && check_column(matrix, i)))
                valid = 0;
        }

        if (valid && !check_groups(matrix)) valid = 0;

        printf("Instancia %d\n", instance);
        if (valid) printf("SIM\n\n");
        else printf("NAO\n\n");
    }

    return 0;
}