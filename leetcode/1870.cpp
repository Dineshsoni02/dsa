
double possibleTime(vector<int> &dist, int speed)
{
    double time = 0.0;
    int n = dist.size();
    for (int i = 0; i < n - 1; i++)
    {                                               // i to n-1 because in ans last element is add as float valued
        double t = (double)dist[i] / (double)speed; // t=dist/speed
        time += ceil(t);                            // i->n-1 elements should be of non floating
    }
    time += (double)dist[n - 1] / (double)speed; // last n-1 element added as it is (floating value)

    return time;
}

// l= minimum speed r=maximum speed
int minSpeedOnTime(vector<int> &dist, double hour)
{
    int l = 1;

    int r = 1e7; // given max speed can be used

    int min_speed = -1; // result
    while (l <= r)
    {

        int mid_speed = l + (r - l) / 2;

        if (possibleTime(dist, mid_speed) <= hour)
        { // check if time by curr midspeed is <= hour
            min_speed = mid_speed;
            r = mid_speed - 1; // reduce r to find minimum possible time
        }
        else
        {
            l = mid_speed + 1; // need to speed up
            std::cout << l;
        }
    }
    return min_speed;
}
