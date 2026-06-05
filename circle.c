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

void drawCircle(int centerRow, int centerCol, int radius) 
{
    int i,j;
    for (i = 0; i < ROWS; i++) {
        for (j = 0; j < COLS; j++) {
            int distanceSquared = (i - centerRow) * (i - centerRow) + (j - centerCol) * (j - centerCol);
            if (distanceSquared <= radius * radius) {
                canvas[i][j] = '*';
            }
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
    drawCircle(10, 10, 5);
    displayCanvas();
    return 0;
}