#pragma once

#include<stdio.h>
#include<iostream>

typedef float SeriesType;
typedef float* SeriesPtr;
typedef int Size;
typedef float (*SeriesFunctionPtr)(SeriesPtr, Size);

extern SeriesPtr* seriesContainer;
extern int seriesCount;

//fun: PrintSeries - wypisuje ciag
//var: SeriesPtr - zadany ciag do wypisania
//var: Size - rozmiar ciagu
void PrintSeries(SeriesPtr, Size);

//fun: SeriesProduct - oblicza iloczyn ciagu
//var: SeriesPtr - zadany ciag ktorego iloczyn zostanie obliczony
//var: Size - rozmiar ciagu
//ret: iloczyn ciagu 
SeriesType SeriesProduct(SeriesPtr, Size);

//fun: SeriesSum - oblicza sume ciaguo
//var: SeriesPtr - zadany ciag ktorego suma zostanie obliczona
//var: Size - rozmiar ciagu
//ret: suma ciagu
SeriesType SeriesSum(SeriesPtr, Size);

//fun: SeriesMax - oblicza maksymalna wartosc ciagu
//var: SeriesPtr - zadany ciag ktorego maksymalna wartosc zostanie obliczona
//var: Size - rozmiar ciagu
//ret: maksymalna wartosc ciaguo
SeriesType SeriesMax(SeriesPtr, Size);

//fun: SeriesMin - oblicza minimalna wartosc ciagu
//var: SeriesPtr - zadany ciag ktorego minimalna wartosc zostanie obliczona
//var: Size - rozmiar ciagu
//ret: minimalna wartosc ciagu 
SeriesType SeriesMin(SeriesPtr, Size);

//fun: RunAndPrint - wypisuje nazwe zadanej funkcji oraz jej wartosc dla zadanego ciagu
//var SeriesFunctionPtr - zadana funkcja operujaca na ciagu
//var: SeriesPtr - zadany ciag
//var: Size - rozmiar ciagu
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, Size);

//fun: DeleteSeries - zwalnia pamiec przydzielona do wszystkich ciagow
void DeleteSeries();