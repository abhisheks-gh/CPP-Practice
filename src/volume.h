//Code 1 --> Header file source code
namespace volume
{
    float cube(int a)
    {
        return a * a * a;
    }
    float sphere(int r)
    {
        return (4 * 3.14 * r * r * r) / 3;
    }
    float cylinder(int r, int h)
    {
        return 3.14 * r * r * h;
    }
}
