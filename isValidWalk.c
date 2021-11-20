/*
You live in the city of Cartesia where all roads are laid out in a perfect grid. You arrived ten minutes too early to an appointment, so you decided to take the opportunity to go for a short walk. The city provides its citizens with a Walk Generating App on their phones -- everytime you press the button it sends you an array of one-letter strings representing directions to walk (eg. ['n', 's', 'w', 'e']). You always walk only a single block for each letter (direction) and you know it takes you one minute to traverse one city block, so create a function that will return true if the walk the app gives you will take you exactly ten minutes (you don't want to be early or late!) and will, of course, return you to your starting point. Return false otherwise.
*/
#include <stdbool.h>



struct Point {
  int x;
  int y;
};

void adjustCoordinate(char direction, struct Point* coordinates) {
    switch(direction) {
        case 'n':
        coordinates -> y++;
        break;
        case 's':
        coordinates -> y--;
        break;
        case 'w':
        coordinates -> x--;
        break;
        case 'e':
        coordinates -> x++;
        break;
    }
}

bool isValidWalk(const char *walk) {

    struct Point coordinates;
    coordinates.x = 0;
    coordinates.y = 0;
  
    int i = 0, time = 0;
    for(i=0; walk[i] != '\0'; i++) {
      
      adjustCoordinate(walk[i], &coordinates);
      time++;
    }

  printf("time: %d\n", time);
  
  return coordinates.x == 0 && coordinates.y == 0 && time == 10;

}