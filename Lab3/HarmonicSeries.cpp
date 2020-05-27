#include"HarmonicSeries.h"

SeriesPtr InitializeHarmonicSeries(Size size) 
{
    SeriesPtr temp = new SeriesType[size];

    if(!temp)
    {
        printf("ERROR::BRAK ZAALOKOWANEJ PAMIECI\n");
        return NULL;
    }

    *temp = 1.f;

    for(int i=1; i<size; i++)
        temp[i] = 1/float(i+1);

    return temp;
}

void PrintSeries(SeriesPtr series, Size size)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return;
    }

    for(int i=0; i<size; i++)
        printf("  %.2f", series[i]);

    printf("\n");
}

SeriesType SeriesProduct(SeriesPtr series, Size size)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return 0;
    }

    SeriesType temp = 1;

    for(int i=0; i<size; i++)
        temp *= series[i];

    return temp;
}

SeriesType SeriesSum(SeriesPtr series, Size size)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return 0;
    }

    SeriesType sum = 0;

    for(int i=0; i<size; i++)
        sum += series[i];

    return sum;
}

SeriesType SeriesMax(SeriesPtr series, Size size)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return 0;
    }

    SeriesType max = series[0];

    for(int i=1; i<size; i++)
        if(series[i] > max)
            max = series[i];

    return max;
}

SeriesType SeriesMin(SeriesPtr series, Size size)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return 0;
    }

    SeriesType min = series[0];

    for(int i=1; i<size; i++)
        if(series[i] < min)
            min = series[i];

    return min;
}

void RunAndPrint(SeriesFunctionPtr fun, SeriesPtr series, Size size)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return;
    }

    static int counter = 0;

    switch(counter)
    {
    case 0:
        printf("Product: %.2f\n", fun(series, size));
        break;
    case 1:
        printf("Sum: %.2f\n", fun(series, size));
        break;
    case 2:
        printf("Maximum: %.2f\n", fun(series, size));
        break;
    case 3:
        printf("Minimum: %.2f\n", fun(series, size));
        break;
    default:
        printf("ERROR::COUNTER POZA ROZMIAREM\n");
        return;
        break;

    }

    counter++;
}

void DeleteSeries(SeriesPtr series)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return;
    }

    delete[] series;
    series = NULL;
}