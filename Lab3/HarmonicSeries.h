#pragma once

#include<stdio.h>

typedef float SeriesType;
typedef float* SeriesPtr;
typedef int Size;
typedef float (*SeriesFunctionPtr)(SeriesPtr, Size);

//fun: InitializeHarmonicSeries - inicjalicuje ciag harmoniczny
//var: Size - rozmiar ciagu
//ret: zwraca wskaznik do poczatku tablicy przechowujacej ciag
SeriesPtr InitializeHarmonicSeries(Size);

//fun: PrintSeries - wypisuje ciag harmoniczny
//var: SeriesPtr - zadany ciag do wypisania
//var: Size - rozmiar ciagu
void PrintSeries(SeriesPtr, Size);

//fun: SeriesProduct - oblicza iloczyn ciagu harmonicznego
//var: SeriesPtr - zadany ciag ktorego iloczyn zostanie obliczony
//var: Size - rozmiar ciagu
//ret: iloczyn ciagu harmonicznego
SeriesType SeriesProduct(SeriesPtr, Size);

//fun: SeriesSum - oblicza sume ciagu harmonicznego
//var: SeriesPtr - zadany ciag ktorego suma zostanie obliczona
//var: Size - rozmiar ciagu
//ret: suma ciagu harmonicznego
SeriesType SeriesSum(SeriesPtr, Size);

//fun: SeriesMax - oblicza maksymalna wartosc ciagu harmonicznego
//var: SeriesPtr - zadany ciag ktorego maksymalna wartosc zostanie obliczona
//var: Size - rozmiar ciagu
//ret: maksymalna wartosc ciagu harmonicznego
SeriesType SeriesMax(SeriesPtr, Size);

//fun: SeriesMin - oblicza minimalna wartosc ciagu harmonicznego
//var: SeriesPtr - zadany ciag ktorego minimalna wartosc zostanie obliczona
//var: Size - rozmiar ciagu
//ret: minimalna wartosc ciagu harmonicznego
SeriesType SeriesMin(SeriesPtr, Size);

//fun: RunAndPrint - wypisuje nazwe zadanej funkcji oraz jej wartosc dla zadanego ciagu
//var SeriesFunctionPtr - zadana funkcja operujaca na ciagu harmonicznym
//var: SeriesPtr - zadany ciag
//var: Size - rozmiar ciagu
void RunAndPrint(SeriesFunctionPtr, SeriesPtr, Size);

//fun: DeleteSeries - zwalnia pamiec przydzielona na podany ciag
//var: SeriesPtr - wskaznik do tablicy przechowujacej ciag, ktorej zaalokowana pamiec 
//                 zostanie zwolniona
void DeleteSeries(SeriesPtr);