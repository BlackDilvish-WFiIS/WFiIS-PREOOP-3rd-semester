#include"GeometricSeries.h"

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
