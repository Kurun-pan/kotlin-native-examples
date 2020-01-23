import Foundation
import sample

// echo string
print(SampleKt.echo(str:"hello, world!") ?? "nill")

// access global value
print(SampleKt.globalString)

// access Object
print(Object().pluginName)

// Rational
let ktRational = Rational(numerator:4, denominator:2)
print("result = \(ktRational.result as Optional)")
