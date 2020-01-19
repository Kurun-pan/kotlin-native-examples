all: KotlinNative

KotlinNative: KotlinNative.kt
	kotlinc-native -o KotlinNative KotlinNative.kt -Werror -p framework

clean:
	rm -rf *.framework
