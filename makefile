SRCS := $(wildcard ej1/source/*.cpp) ej1/exes/main.cpp
HEADERS := $(wildcard ej1/headers/*.h)

run1: $(SRCS) $(HEADERS) ej1/exes/main.cpp
	touch archivo-ej-1
	g++ $(SRCS) -Wall -Wconversion -Wextra -Wpedantic -Iej1/headers -o ejercicio1exe
	./ejercicio1exe
	rm archivo-ej-1


SRCS2 := $(wildcard ej2/source/*.cpp) ej2/exes/main.cpp
HEADERS2 := $(wildcard ej2/headers/*.h)

run2: $(SRCS2) $(HEADERS2) ej2/exes/main.cpp
	g++ $(SRCS2) -Wall -Wconversion -Wextra -Wpedantic -Iej2/headers -o ejercicio2exe
	./ejercicio2exe
