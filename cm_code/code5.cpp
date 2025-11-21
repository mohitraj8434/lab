#include<iostream>
#include<cmath>
using namespace std;

float f(float x)
{
    return (1 / (1 + x * x));
}

int main()
{
    float lower_limit, upper_limit, integration = 0.0, stepSize, k;
    int i, sub_interval;

    cout << "Enter lower limit of integration: ";
    cin >> lower_limit;

    cout << "Enter upper limit of integration: ";
    cin >> upper_limit;

    cout << "Enter number of sub intervals: ";
    cin >> sub_interval;

    stepSize = (upper_limit - lower_limit) / sub_interval;

    integration = f(lower_limit) + f(upper_limit);

    for(i = 1; i <= sub_interval - 1; i++)
    {
        k = lower_limit + i * stepSize;
        integration += 2 * f(k);
    }

    integration = integration * stepSize / 2;

    cout << endl << "Required value of integration is: " << integration;

    return 0;
}


