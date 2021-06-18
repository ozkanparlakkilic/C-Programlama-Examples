#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

typedef struct Point_ {
    int x;
    int y;
}Point;

Point addPoints(Point p1, Point p2)
{
    Point result;

    result.x = p1.x + p2.x;
    result.y = p1.y + p2.y;

    return result;
}

void PrintPoint(Point p1)
{
    printf("X: %d\tY: %d\n",p1.x,p1.y);
}

double distanceBetweenPoints(Point p1, Point p2)
{
    return sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y),2));
}

int main()
{
    Point p1;
    p1.x = 5;
    p1.y = 6;

    Point p2;
    p2.x = 6;
    p2.y = 8;

    Point p4;
    p4.x = 8;
    p4.y = 10;

    Point p3;
    p3 = addPoints(p1,p2);

    PrintPoint(p3);


    printf("Distance Between Points is %lf",distanceBetweenPoints(p1,p4));
    return 0;
}