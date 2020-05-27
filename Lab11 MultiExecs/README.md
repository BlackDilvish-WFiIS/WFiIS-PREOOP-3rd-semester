# Buildowanie i Linkowanie modułów (bibliotek) za pomocą cmake

## Zagadanienia:
* Hierarchiczna struktura progamu definiowana przez strukturę CMakeLists.txt
* Buildowanie biblioteki zamiast definiowania exec'a
* Upublicznianie plików nagłówkowych przez cmake CACHE
* Definiowanie exec'ów z linkowaniem 'własnej' biblioteki

## Kod źródłowy
Zadanie oparte jest o wcześniej rozwijane zadania (poprzednie 2 laboratoria):
* LbGrades
* LbStudents

## Struktura programu

CMakeLists.txt
/Executables/CMakeLists.txt
/Executables/src/grades.cpp 	# poprzednio Main.cpp
/Executables/src/students.cpp 	# poprzednio Main.cpp
/Executables/src/students_and_grades.cpp 	# TODO

/GradeBook/CMakeLists.txt
/GradeBook/src/
/GradeBook/include/

/Students/CMakeLists.txt
/Students/src/
/Students/include/

## ZADANIE
* Uwaga: Struktura CMakeLists.txt jest udostępniona przez prowadzącego
* Połączyć poprzednio rozwijany kod źródłowy w/w zaproponowaną strukture programu
* Zaimplementować dodatkowy main (exec: students_and_grades, 
  własny pomysł na wykorzystanie wcześniejszych klas)

