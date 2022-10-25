#Area
###These are some simple codes to find the area of some shapes
```
float area, r ;
    printf("Enter your Radius : ");
    scanf("%f", &r);
    area = (22/7) * r * r;
    printf("Area of the circle in : %.02f\n", area);
    return 0;
```
- The first line asks for input from the user, so they can enter their desired radius.
- The next line uses scanf() to read in this value and store it into r.
- Then, on the third line, we calculate 22/7 * r * r , which is how much area there will be if we were to draw a circle with that radius around our current location (22/7 is just an approximation).
- On the fourth line, we print out what this would look like: Area of the circle in : 0.02.
- -