#include"SeriesOperations.h"

SeriesPtr* seriesContainer;
int seriesCount;

void PrintSeries(SeriesPtr series, Size size)
{
    if(!series)
    {
        printf("ERROR::WSKAZNIK CIAGU JEST PUSTY\n");
        return;
    }

    for(int i=0; i<size; i++)
        printf("  %3.2f", series[i]);

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

    if(fun == SeriesProduct)
        std::cout<<"Product: ";
    else if(fun == SeriesSum)
        std::cout<<"Sum: ";
    else if(fun == SeriesMax)
        std::cout<<"Maximum: ";
    else if(fun == SeriesMin)
        std::cout<<"Minimum: ";
    else{
        printf("ERROR::BRAK ZDEFINIOWANEJ OPERACJI\n");
        return;
    }

    std::cout<<fun(series, size)<<"\n";

}

void DeleteSeries()
{
    for(int i=0; i<seriesCount; i++)
        delete[] seriesContainer[i];

    printf("Deleting %d series...\n",seriesCount);

    delete[] seriesContainer;
    seriesCount=0;

    printf(" *** Memory cleanded up ***\n");
}