build:
	 gcc -Wall -Werror -Wextra -pedantic ./src/*.c -IC:\MinGW\include\SDL2 -LC:\MinGW\lib -lmingw32 -lSDL2main -lSDL2 -lm -o maze

run:
	./maze;

clean:
	rm maze;