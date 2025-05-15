SRCS := $(wildcard ej1/source/*.cpp) ej1/exes/main.cpp
HEADERS := $(wildcard ej1/headers/*.h)

run1: $(SRCS) $(HEADERS) ej1/exes/main.cpp
	g++ $(SRCS) -Wall -Wconversion -Wextra -Wpedantic -Iej1/headers -o run1