CC=clang++
TARGET=interop-cc-kotlin

.PHONY: all
all: utility $(TARGET)

.PHONY: utility
utility: utility.kt
	#kotlinc -cp ../common_lib/kotlinx-coroutines-core-1.3.3.jar utility.kt -include-runtime -d utility.jar

	#kotlinc-native -o utility utility.kt \
	#	-library ../common_lib/kotlinx-coroutines-core-native_debug_linux_x64-1.0.0-RC1.klib \
	#	-Werror -p dynamic

	kotlinc-native -o utility utility.kt -Werror -p dynamic

.PHONY: $(TARGET)
$(TARGET): main.cc utility
ifeq ($(shell uname),Linux)
	$(CC) -o $(TARGET) main.cc -L./ -lutility -Wl,-rpath,./ -Werror
else
	$(CC) -o $(TARGET) main.cc libutility.dylib -Werror
endif

.PHONY: clean
clean:
	rm -f $(TARGET) utility_api.h *.dylib *.so
