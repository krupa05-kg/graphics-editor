#include <stdio.h>

#define ROWS 20
#define COLS 20

char canvas[ROWS][COLS];

void initCanvas() 
{
    int i,j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            canvas[i][j] = '_';
        }
    }
}

void drawTriangle(int row, int col, int height) 
{
    int i,j;
    for (i = 0; i < height; i++) {
        for (j = 0; j <= i; j++) {
            canvas[row + i][col + j] = '*';
        }
    }
}

void displayCanvas() 
{
    int i,j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            printf("%c ", canvas[i][j]);
        }
        printf("\n");
    }
}

int main() 
{
    initCanvas();
    drawTriangle(5, 10, 5);
    displayCanvas();
    return 0;
}


