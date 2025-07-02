// 문제 하자가 많음

#include <stdio.h>

int calculate(int w, int h, int j, int i) {
    if (i >= 0 && i < h && j >= 0 && j < w) return 1;
    return 0;
}

int main() {
    int field[4][4] = {
        {0,1,0,1},
        {0,0,0,1},
        {1,1,1,0},
        {0,1,1,1}
    };
    int mines[4][4] = {0};
    int w = 4, h = 4;
    int x, y, i, j;

    for(y=0; y<h; y++) {
        for(x=0; x<w; x++) {  
            if(field[y][x] == 0) continue;
            for(i=y-1; i<=y+1; i++) {
                for(j=x-1; j<=x+1; j++) {
                    if(calculate(w,h,j,i) == 1) {
                        mines[i][j] += 1;
                    }
                }
            }
        }
    }
    for(y=0; y<h; y++){
        for(x=0; x<w; x++)
            printf("%d", mines[y][x]);
        printf("\n");
    }
    return 0;
}