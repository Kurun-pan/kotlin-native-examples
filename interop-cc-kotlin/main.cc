#include <iostream>
#include "sample_api.h" // <= This is a generated file; do not edit or check into version control.

int main() {
    sample_ExportedSymbols* libs = sample_symbols();

    // echo string
    std::cout << libs->kotlin.root.sample.echo("Hello, world!") << std::endl;

    // access Object
    sample_kref_sample_Object object = libs->kotlin.root.sample.Object._instance();
    std::cout << libs->kotlin.root.sample.Object.get_pluginName(object) << std::endl;

    // access global value
    std::cout << libs->kotlin.root.sample.get_globalString() << std::endl;

    // Rational
    sample_kref_sample_Rational newInstance = libs->kotlin.root.sample.Rational.Rational(4, 2);
    int result = libs->kotlin.root.sample.Rational.result(newInstance);
    const char* str = libs->kotlin.root.sample.Rational.toString(newInstance);
    std::cout << str << " = " << result << std::endl;

    return 0;
}
