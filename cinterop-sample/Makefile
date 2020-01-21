TARGET=cinterop-sample

KOTLIN_NATIVE_INSTALL_DIR=/usr/local/kotlin-native
PLATFORM_LIB_PATH=platformLibs/src/platform/osx
PLATFORM_LIB=OSLog.def

.PHONY: all
all: osloglib $(TARGET)

.PHONY: all
clean:
	rm -rf sample.kexe osloglib.*

.PHONY: all
osloglib: osloglib
	cinterop -def $(KOTLIN_NATIVE_INSTALL_DIR)/$(PLATFORM_LIB_PATH)/$(PLATFORM_LIB) -o osloglib

.PHONY: all
sample.kexe: sample.kt osloglib
	kotlinc-native -linker-option -library osloglib sample.kt -o sample

.PHONY: all clean
