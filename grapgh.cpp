#include <iostream>
#include <vector>

using namespace std;

struct Point
{
    double x, y;
};

int main()
{
    // Declare a vector of Point structures to store the coordinates
    vector<Point> points;

    // Take 5 inputs for x and y coordinates
    for (int i = 0; i < 5; ++i)
    {
        Point p;
        cout << "Enter x-coordinate for point " << i + 1 << ": ";
        cin >> p.x;
        cout << "Enter y-coordinate for point " << i + 1 << ": ";
        cin >> p.y;

        // Add the point to the vector
        points.push_back(p);
    }

    // Display the entered coordinates
    cout << "\nEntered coordinates:\n";
    for (int i = 0; i < 5; ++i)
    {
        cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ")\n";
    }

    // You can now use these coordinates to plot a graph or perform other operations

    return 0;
}