OBJETIVO : INGREDIENTES
	PASO 1
	PASO 2
	PASO 3

bin/test : src/tui:test.cpp
		g++ src/main.cpp -o bin/test

ejecutar : bin/space
	./bin/test
