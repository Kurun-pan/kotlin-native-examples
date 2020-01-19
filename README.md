# kotlin-native-examples
Kotlin/Native examples

## Environment Setup

### Kotlin/Native Compiler Install

#### macOS

```
$ wget https://github.com/JetBrains/kotlin/releases/download/v1.3.61/kotlin-native-macos-1.3.61.tar.gz
$ tar xzvf kotlin-native-macos-1.3.61.tar.gz
$ sudo mkdir -p /usr/local/kotlin-native
$ sudo mv kotlin-native-macos-1.3.61/* /usr/local/kotlin-native
$ export PATH=$PATH:/usr/local/kotlin-native/bin/
```

## Examples

### hello-world	

print "Hello, World!"

### mix-cc-kotlin

Example that call Kotlin/Native library from C++ source code

### flutter-plugin

Example of build for Flutter plugin
