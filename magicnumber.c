// #include <stdio.h>

// int main() {
//     int n = 3;  // 3x3 magic square
//     int magic[3][3] = {0};

//     int i = 0, j = n / 2;  // start position: first row, middle column

//     for (int num = 1; num <= n * n; num++) {
//         magic[i][j] = num;  // number place karo

//         // next position calculate karo
//         int newi = (i - 1 + n) % n;  // upar jao (wrap around)
//         int newj = (j + 1) % n;      // right jao (wrap around)

//         if (magic[newi][newj] != 0) {
//             // agar already filled hai to neeche jao
//             i = (i + 1) % n;
//         } else {
//             i = newi;
//             j = newj;
//         }
//     }

//     // print magic square
//     printf("Magic Square of size 3:\n");
//     for (int r = 0; r < n; r++) {
//         for (int c = 0; c < n; c++) {
//             printf("%3d ", magic[r][c]);
//         }
//         printf("\n");
//     }

//     return 0;
// }








