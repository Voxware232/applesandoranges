#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){
    float N,D;
    while (1){
        float x = rand () % (100) ;

        x = x/50;
        x = x -1;


        float y = rand () % (100) ;

        y = y/50;
        y = y -1;

        //printf("\n%.3f\t",x);
        //printf("%.3f",y);

        float point = sqrt((x*x)+(y*y));

        if (point < 1){
            //printf("\nYes");
            N = N + 1;
            printf("\n N - %d",N);
        }
        else
        {

            //printf("\nNo");
        }
        D = D +1;
        printf("\nD - %d",D);

        float pi =  (N/D) * 4;
        printf("\n%.6f",pi);

    }





    return 0 ;

}
