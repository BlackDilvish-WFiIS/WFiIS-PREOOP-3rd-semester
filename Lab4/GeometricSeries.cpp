#include"GeometricSeries.h"

//Zmienne globalne do przechowania ciagow
SeriesPtr* seriesContainer;
int seriesCount;


SeriesPtr InitializeGeometricSeries(Size size, const float ratio) 
{
    //Dynamiczna zmiana rozmiaru kontenera na ciagi z
    //wykozystaniem pomocniczej tablicy "containerTemp"

    SeriesPtr* containerTemp;

    if(seriesCount > 0)
    {

        containerTemp = new SeriesPtr[seriesCount];

        for(int i=0; i<seriesCount; i++)
            containerTemp[i] = seriesContainer[i];

        delete[] seriesContainer;
    }

    seriesContainer = new SeriesPtr[seriesCount + 1];

    if(seriesCount > 0)
    {
    for(int i=0; i<seriesCount; i++)
        seriesContainer[i] = containerTemp[i]; 

    delete[] containerTemp;
    }

    //Utworzenie tymczasowego ciagu geometrycznego
    //i inicjalizowanie go podanymi atrybutami

    SeriesPtr temp = new SeriesType[size];

    if(!temp)
    {
        printf("ERROR::BRAK ZAALOKOWANEJ PAMIECI\n");
        return NULL;
    }

    *temp = 1.f;

    for(int i=1; i<size; i++)
        temp[i] = temp[i-1] * ratio;

    seriesContainer[seriesCount] = temp;
    seriesCount++;

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
        printf("  %3.0f", series[i]);

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

    SeriesType result = fun(series, size);

    if(result == SeriesProduct(series, size))
        printf("Product: %.0f\n", fun(series, size));
    else if(result == SeriesSum(series, size))
        printf("Sum: %.0f\n", fun(series, size));
    else if(result == SeriesMax(series, size))
        printf("Maximum: %.0f\n", fun(series, size));
    else if(result == SeriesMin(series, size))
        printf("Minimum: %.0f\n", fun(series, size));
    else{
        printf("ERROR::BRAK ZDEFINIOWANEJ OPERACJI\n");
        return;
    }

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