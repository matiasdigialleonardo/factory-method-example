g++ -Wall -std=c++11 -I.\include -c .\src\weapons.cpp
g++ -Wall -std=c++11 -I.\include -c main.cpp

g++ -I.\include weapons.o main.o -o main.exe

::Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
main.exe