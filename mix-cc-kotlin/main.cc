#include <iostream>
#include "utility_api.h" // <= This is a generated file; do not edit or check into version control.

int main() {
    utility_ExportedSymbols* libs = utility_symbols();

    // echo string
    std::cout << libs->kotlin.root.utility.echo("hello, world!") << std::endl;

    // access global value
    std::cout << libs->kotlin.root.utility.get_globalString() << std::endl;

    // access Object
    utility_kref_utility_Object object = libs->kotlin.root.utility.Object._instance();
    std::cout << libs->kotlin.root.utility.Object.get_pluginName(object) << std::endl;

    // Rational
    utility_kref_utility_Rational newInstance = libs->kotlin.root.utility.Rational.Rational(4, 2);
    int result = libs->kotlin.root.utility.Rational.result(newInstance);
    const char* str = libs->kotlin.root.utility.Rational.toString(newInstance);
    std::cout << str << " = " << result << std::endl;

    return 0;
}
