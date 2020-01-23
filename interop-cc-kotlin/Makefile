CC=clang++
TARGET=interop-cc-kotlin

.PHONY: all
all: sample $(TARGET)

.PHONY: sample
sample: sample.kt
	#kotlinc -cp ../common_lib/kotlinx-coroutines-core-1.3.3.jar sample.kt -include-runtime -d sample.jar

	#kotlinc-native -o sample sample.kt \
	#	-library ../common_lib/kotlinx-coroutines-core-native_debug_linux_x64-1.0.0-RC1.klib \
	#	-Werror -p dynamic

	kotlinc-native -o sample sample.kt -Werror -p dynamic

.PHONY: $(TARGET)
$(TARGET): main.cc sample
ifeq ($(shell uname),Linux)
	$(CC) -o $(TARGET) main.cc -L./ -lsample -Wl,-rpath,./ -Werror
else
	$(CC) -o $(TARGET) main.cc libsample.dylib -Werror
endif

.PHONY: clean
clean:
	rm -f $(TARGET) sample_api.h *.dylib *.so
