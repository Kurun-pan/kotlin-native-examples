import Foundation
import utility

// echo string
print(UtilityKt.echo(str:"hello, world!") ?? "nill")

// access global value
print(UtilityKt.globalString)

// access Object
print(Object().pluginName)

// Rational
let ktRational = Rational(numerator:4, denominator:2)
print("(ktRational.description) = (ktRational.result)")
