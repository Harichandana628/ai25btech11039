#include <stdio.h>

int main() {
    int marks[] = {85, 76, 90, 85, 39, 48, 56, 95, 81, 75};
    int n = 10; // number of students
    int i;
    int highest, lowest, range;
    printf("a.Calculating highest and lowest narks obtained by students:\n");

    //  Assuming first mark is both highest and lowest
    highest = marks[0];
    lowest = marks[0];

    //  Loop to find highest and lowest
    for (i = 1; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }
       printf("Highest marks = %d\n", highest);
    printf("Lowest marks = %d\n", lowest);
    //Calculating range

    printf("b.Calculating Range:\n");
    range = highest - lowest;

    printf("Range of marks = %d\n", range);
     //Calculating mean
     printf("c. Calculating Mean marks obtained by the group:\n");
     int sum = 0;
    float mean;
    for (i = 0; i < n; i++) {
        sum += marks[i];
    }
    mean = (float)sum / n;
    printf("Mean marks = %f\n", mean);

    return 0;

}
