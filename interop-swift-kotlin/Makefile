CC=clang++
TARGET=interop-swift-kotlin

.PHONY: all
all: sample $(TARGET)

.PHONY: sample
sample: sample.kt
	kotlinc-native -o sample sample.kt -Werror -p framework
	install_name_tool -id "@executable_path/sample.framework/Versions/A/sample" ./sample.framework/Versions/A/sample

.PHONY: $(TARGET)
$(TARGET): main.swift sample
	swiftc -o $(TARGET) main.swift -F . -framework ./sample

clean:
	rm -rf $(TARGET) *.framework
