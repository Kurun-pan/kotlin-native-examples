CC=clang++
TARGET=userdefaults_sample

.PHONY: all
all:
	kotlinc-native -o $(TARGET) main.kt -Werror

.PHONY: clean
clean:
	rm -f $(TARGET) *.kexe
