CC=clang++
TARGET=interop-swift-kotlin

.PHONY: all
all: utility $(TARGET)

.PHONY: utility
utility: utility.kt
	kotlinc-native -o utility utility.kt -Werror -p framework

.PHONY: $(TARGET)
$(TARGET): main.swift utility
	swiftc -o $(TARGET) main.swift -F . -framework utility

clean:
	rm -rf $(TARGET) *.framework
