// Prosze dopisac kod, dodac nowe pliki, tak aby program wykonywal
// sie, a wynik jego dzialania byl taki sam jak podany na końcu tego
// pliku.

// Prosze napisac klasy: Grade, ktora reprezentuje ocene studenta, oraz
// GradeBook, ktora reprezentuje dziennik ocen. Kazda ocena ma
// przypisany unikatowy numer ID, inicjalizowany w momencie tworzenia
// danej oceny.

// Prosze zwrocic uwage na dobre zarzadzanie pamiecia, zwlaszcza na
// zwolnienie pamieci na koniec programu.

// Założenia projektowe:
// 1) Przy wykonaniu tego zadania nie wolno korzystac z std::vector
// 2) W zadaniu należy wykorzystać konstrukcję delegowania konstruktorów
//    / brak - 1 pkt
// 3) W zadaniu należy wykorzystać implementację funkcji z domyślnymi
//    wartościami parametrów formalnych.
//    / brak - 1 pkt

// Pliku Main.cpp, nie wolno modyfikowac.

// Ostateczny program powinien byc przyjazny dla programisty (miec
// czytelny i dobrze napisany kod). 

// Przy wykonaniu zadania nie wolno korzystac z internetu, notatek,
// ani zadnych innych materialow. Można użyć wcześniejszego CMakeLists.txt

// Kody zrodlowe musza znajdowac sie w katalogu do ktorego nikt oprocz
// wlasciciela nie ma praw dostepu.

// Rozwiazanie (czyli dodane pliki, CMakeLists.txt i Main.cpp)
// nalezy wgrac do UPEL w formie archiwum, spakowany folder projektu do Lab10.tar.gz

#include <iostream>
#include <utility>
#include "Grade.h"
#include "GradeBook.h"

int main() {

  Grade* firstGrade = new Grade (3.5);
  std::cout<<"\nFirst look to the grade:\n";
  firstGrade->Print();

  GradeBook goodStudents;
  goodStudents.Insert(firstGrade, "Neural Networks");
  std::cout<<"\n\nFirst look into the GradeBook:\n";
  goodStudents.Print();

  goodStudents.Insert(new Grade(4),"Complex numbers calculation");

  goodStudents.AddGrade(4.5, "C++");
  goodStudents.AddGrade(4.5);

  std::cout<<"\nSecond look into the GradeBook:\n";
  goodStudents.Print();

  GradeBook backup = goodStudents;
  std::cout<<"\nSummary of the GradeBook:\n";
  backup.Summary();

  GradeBook anotherGradeBook(std::move(goodStudents));
  std::cout<<"\nAgain summary of the GradeBook:\n";
  anotherGradeBook.Summary();

  return 0;
}
/**
brachwal@vbox:[cmake-build-debug]$ ./grades

First look to the grade:
Grade ID=1 value=3.5

First look into the GradeBook:
[GradeBook]: Set of grades in the book:
Grade ID=1 value=3.5 "Neural Networks"


Second look into the GradeBook:
[GradeBook]: Set of grades in the book:
Grade ID=1 value=3.5 "Neural Networks"
Grade ID=2 value=4 "Complex numbers calculation"
Grade ID=3 value=4.5 "C++"
Grade ID=4 value=4.5 "No category"


Summary of the GradeBook:
[GradeBook]: Summary: Number of grades in the book: 4
[GradeBook]: Summary: Average of grades: 4.125

Again summary of the GradeBook:
[GradeBook]: Summary: Number of grades in the book: 4
[GradeBook]: Summary: Average of grades: 4.125
*/
