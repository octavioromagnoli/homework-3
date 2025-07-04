SRCS := $(wildcard ej1/source/*.cpp) ej1/exes/main.cpp
HEADERS := $(wildcard ej1/headers/*.hpp)

SRCS2 := $(wildcard ej2/source/*.cpp) ej2/exes/main.cpp
HEADERS2 := $(wildcard ej2/headers/*.hpp)

SRCS3 := $(wildcard ej3/source/*.cpp) ej3/exes/main.cpp
HEADERS2 := $(wildcard ej3/headers/*.hpp)

run1: $(SRCS) $(HEADERS) ej1/exes/main.cpp
	touch archivo-ej-1
	g++ $(SRCS) -Wall -Wconversion -Wextra -Wpedantic -Iej1/headers -o ejercicio1exe
	./ejercicio1exe
	rm archivo-ej-1

run2: $(SRCS2) $(HEADERS2) ej2/exes/main.cpp
	g++ $(SRCS2) -Wall -Wconversion -Wextra -Wpedantic -Iej2/headers -o ejercicio2exe
	./ejercicio2exe

run3: $(SRCS3) $(HEADERS3) ej3/exes/main.cpp
	g++ $(SRCS3) -Wall -Wconversion -Wextra -Wpedantic -Iej3/headers -o ejercicio3exe
	./ejercicio3exe
