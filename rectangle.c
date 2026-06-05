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
void drawRectangle(int row, int col,int height, int width) 
{
    int i,j;
    for (i = row; i < row + height; i++)
    {
        for (j = col; j < col + width; j++) 
        {
            canvas[i][j] = '*';
            
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
    drawRectangle(5, 10, 4, 8);
    displayCanvas();
    return 0;
}