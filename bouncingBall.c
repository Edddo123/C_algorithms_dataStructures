#include <stdio.h>

/*
A child is playing with a ball on the nth floor of a tall building. The height of this floor, h, is known.

He drops the ball out of the window. The ball bounces (for example), to two-thirds of its height (a bounce of 0.66).

His mother looks out of a window 1.5 meters from the ground.

How many times will the mother see the ball pass in front of her window (including when it's falling and bouncing?

Three conditions must be met for a valid experiment:
Float parameter "h" in meters must be greater than 0
Float parameter "bounce" must be greater than 0 and less than 1
Float parameter "window" must be less than h.
If all three conditions above are fulfilled, return a positive integer, otherwise return -1.

Note:
The ball can only be seen if the height of the rebounding ball is strictly greater than the window parameter
*/


int countBounces(double bounceH,double bounce,double window, int i);

int bouncingBall(double h, double bounce, double window) {
  if(h <= 0 || bounce <= 0 || bounce >= 1 || window >= h) {
    return -1;
  }
    int  i=0;
    double bounceH = h;
    int count = countBounces(bounceH, bounce, window, i);
    return 2*count + 1;
}

int countBounces(double bounceH,double bounce,double window, int i) {
  bounceH *= bounce;
  if(bounceH <= window) {
    return i;
  }
  i++;
  return countBounces(bounceH, bounce, window, i);
}



// smart solution

#include <math.h>
int bouncingBall(double h, double bounce, double window) {
   // times = n*2-1, n is the greatest integer for which:
   // h*bounce^n < window => n < log(window/h)/log(b)
   
   int n = (int) ceil(log(window/h)/log(bounce));
   
   return n*2-1;
   
}