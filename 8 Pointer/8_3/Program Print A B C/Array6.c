#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, k;
    char kode=219;

    static int data_huruf[5][8][8] = {
                {
                    {0, 1, 1, 1, 1, 1, 0, 0},
                    {0, 1, 0, 0, 0, 1, 0, 0},
                    {0, 1, 0, 0, 0, 1, 0, 0},
                    {1, 1, 1, 1, 1, 1, 1, 0},
                    {1, 1, 0, 0, 0, 0, 1, 0},
                    {1, 1, 0, 0, 0, 0, 1, 0},
                    {1, 1, 0, 0, 0, 0, 1, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0}
                },
                {
                    {1, 1, 1, 1, 1, 1, 0, 0},
                    {1, 0, 0, 0, 0, 1, 0, 0},
                    {1, 0, 0, 0, 0, 1, 0, 0},
                    {1, 1, 1, 1, 1, 1, 1, 0},
                    {1, 1, 0, 0, 0, 1, 1, 0},
                    {1, 1, 0, 0, 0, 1, 1, 0},
                    {1, 1, 1, 1, 1, 1, 1, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0}
                },
                {
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 0, 0, 0, 0, 0, 0},
                    {1, 1, 0, 0, 0, 0, 0, 0},
                    {1, 1, 0, 0, 0, 0, 0, 0},
                    {1, 1, 0, 0, 0, 0, 0, 0},
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1}

                },
                {
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 0, 0, 0, 0, 1, 1},
                    {1, 1, 0, 0, 0, 0, 1, 1},
                    {1, 1, 0, 0, 0, 0, 1, 1},
                    {1, 1, 0, 0, 0, 0, 1, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1}
                },
                {
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 0, 0, 0, 0, 0, 0},
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 0, 0, 0, 0, 0, 0},
                    {1, 1, 1, 1, 1, 1, 1, 1},
                    {1, 1, 1, 1, 1, 1, 1, 1}
                }
                };

    int salinan[5][8][8];

    printf("Huruf asli : \n");
    for(i=0; i<5; i++){
        for(j=0; j<8; j++){
            for(k=0; k<8; k++){
                if(data_huruf[i][j][k]){
                    printf("%c", kode);
                }
                else{
                    printf(" ");
                }
            }
            puts("");
        }
        puts("");
    }

    for(i=0; i<5; i++){
        for(j=0; j<8; j++){
            for(k=0; k<8; k++){
                *(&salinan[i][j][k]) = data_huruf[i][j][k];
            }
        }
    }

    puts("Huruf Salinan : ");
    for(i=0; i<5; i++){
        for(j=0; j<8; j++){
            for(k=0; k<8; k++){
                if(*(&salinan[i][j][k])){
                    printf("%c", kode);
                }
                else{
                    printf(" ");
                }
            }
            puts("");
        }
        puts("");
    }

    return 0;
}
