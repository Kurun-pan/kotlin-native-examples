all: utility mix-swift-kotlin

utility: utility.kt
	kotlinc-native -o utility utility.kt -Werror -p framework

mix-swift-kotlin: main.swift utility
	swiftc -o mix-swift-kotlin main.swift -F . -framework utility

clean:
	rm -rf mix-swift-kotlin *.framework
