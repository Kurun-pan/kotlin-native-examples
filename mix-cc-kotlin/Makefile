all: utility mix-cc-kotlin

utility: utility.kt
	kotlinc-native -o utility utility.kt -Werror -produce dynamic

mix-cc-kotlin: main.cc libutility.dylib
	clang++ -o mix-cc-kotlin main.cc libutility.dylib -Werror

clean:
	rm -f mix-cc-kotlin utility_api.h *.dylib
