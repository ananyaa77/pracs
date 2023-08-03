
int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i == j) {
                if (array[i][j] != 1) {
                    return 0;  // Not an identity matrix
                }
            } else {
                if (array[i][j] != 0) {
                    return 0;  // Not an identity matrix
                }
            }
        }
    }
    return 1;  // It is an identity matrix
}