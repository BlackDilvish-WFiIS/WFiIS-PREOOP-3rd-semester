#pragma once

#include<stdio.h>

typedef float SeriesType;
typedef SeriesType* SeriesPtr;
typedef int Size;
typedef float (*SeriesFunctionPtr)(SeriesPtr, Size);

//fun: InitializeGeometricSeries - inicjalicuje ciag geometryczny
//var: Size - rozmiar ciagu
//ret: zwraca wskaznik do poczatku tablicy przechowujacej ciag
SeriesPtr InitializeGeometricSeries(Size, const float);

//fun: PrintSeries - wypisuje ciag geometryczny
//var: SeriesPtr - zadany ciag do wypisania
//var: Size - rozmiar ciagu
void PrintSeries(SeriesPtr, Size);

//fun: SeriesProduct - oblicza iloczyn ciagu geometrycznego
//var: SeriesPtr - zadany ciag ktorego iloczyn zostanie obliczony
//var: Size - rozmiar ciagu
//ret: iloczyn ciagu geometrycznego
SeriesType SeriesProduct(SeriesPtr, Size);

//fun: SeriesSum - oblicza sume ciagu geometrycznego
//var: SeriesPtr - zadany ciag ktorego suma zostanie obliczona
//var: Size - rozmiar ciagu
//ret: suma ciagu geometrycznego
SeriesType SeriesSum(SeriesPtr, Size);

//fun: SeriesMax - oblicza maksymalna wartosc ciagu geometrycznego
//var: SeriesPtr - zadany ciag ktorego maksymalna wartosc zostanie obliczona
//var: Size - rozmiar ciagu
//ret: maksymalna wartosc ciagu geometrycznego
SeriesType SeriesMax(SeriesPtr, Size);

//fun: SeriesMin - oblicza minimalna wartosc ciagu geometrycznego
//var: SeriesPtr - zadany ciag ktorego minimalna wartosc zostanie obliczona
//var: Size - rozmiar ciagu
//ret: minimalna wartosc ciagu geometrycznego
SeriesType SeriesMin(SeriesPtr, Size);

//fun: RunAndPrint - wypisuje nazwe zadanej funkcji oraz jej wartosc dla zadanego ciagu
//var SeriesFunctionPtr - zadana funkcja operujaca na ciagu geometrycznym
//var: SeriesPtr - zadany ciag
//var: Size - rozmiar ciagu
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, Size);

//fun: DeleteSeries - zwalnia pamiec przydzielona do wszystkich ciagow
void DeleteSeries();