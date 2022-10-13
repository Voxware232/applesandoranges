#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Copyright Jan Rzeznik
// University of Nottingham
// Function that allows Pi to be calculated to required accuracy

double get_pi(double accuracy){
    // Initialise the variables
    double Nvalue = 0;
    double Dvalue = 0;
    double pi = 0;
    double error = 0;
    double Nvaluecounter=2000;

    //int iterations = 0;
    //printf("How many iterations N would you like to do?");
    //scanf("%d",&iterations);

    do{

    // Randomly generate 2 cooridnates using the rand() function, and then dividing by 50 and subtracting by 1 to get a value that will be between -1 and 1 inclusive. This will be to 2 dp

    // Generate a random number between 0 and 1000 (1001 is used as it is exclusive of the list), this is the x coordinate
    double x = rand () % (1001) ;

    // Divide the number by 500 to get a value between 0 and 2
    x = x/500;

    // Subtract 1 to obtain the value between -1 and 1
    x = x -1;

    // Repeat the above steps for the y coordinate
    double y = rand () % (1001) ;

    y = y/500;
    y = y -1;

    // Square each coordinate and the square root their sum, this is the 'position' of the dart
    double point = sqrt((x*x)+(y*y));

    // If point is less that 1, it is inside the 'dartboard'
    if (point < 1){
        // Add 1 to the dvalue counter
        Dvalue = Dvalue +1;
        //printf("\nD - %f",Dvalue);
    }
    // The dart is not inside the dartboard
    else
    {
        // Keep the value of the counter of darts the same as previous iteration
        Dvalue = Dvalue;
        //printf("\nNo");
    }

    // Regardless of how many dart are inside the circle, the total number of darts that have been throw will increase with each iteration, hence the nvalue should increase by 1 regardless
    Nvalue = Nvalue + 1;

    printf("\n N - %f",Nvalue);

    // Required calculation for pi
    pi =  (Dvalue/Nvalue) * 4;

    // Calculate the error
    error = 4/(Nvalue+1);

    printf("\n%.10f",pi);
    printf("\t+ error - %f",pi+error);
    printf("\t- error - %f",pi-error);
    printf("\n Error value is %f",error);

    }while ( error>10*accuracy/*||Nvalue<Nvaluecounter*/);

    return 0;
}
int main(){

    get_pi(0.000001);

    return 0 ;

}
