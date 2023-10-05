struct point {
  int x;
  int y;
};

//struct { ... } x,y,z; analogous to int x,y,x;
struct point pt;

printf("%d %d\n", pt.x, pt.y);

double dist, sqrt(double);
dist = sqrt((double)pt.x * pt.x + (double)pt.y * pt.y);

struct rect {
  struct point pt1;
  struct point pt2;
}

struct rect screen;

screen.pt1.x//refer to x coordinate of pt1 member of screen

