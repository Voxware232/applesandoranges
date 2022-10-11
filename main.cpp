#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Copyright Jan Rzeznik
// University of Nottingham
// Function that allows Pi to be calculated to required accuracy

double get_Pi(double accuracy){
    do{

    }(while )
}
int main(){
    float N,D;
    while (1){

        // Randomly generate 2 cooridnates using the rand() function, and then dividing by 50 and subtracting by 1 to get a value that will be between -1 and 1 inclusive. This will be to 2 dp

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
