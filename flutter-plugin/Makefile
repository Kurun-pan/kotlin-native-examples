all: example

example: example.kt
	kotlinc-native -o example example.kt -Werror -produce framework

clean:
	rm -rf *.framework
