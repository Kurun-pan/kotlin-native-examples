package sample

object Object {
  val pluginName = "Sample"
}

val globalString = "A global String"

class Rational(val numerator: Int, val denominator: Int = 1) {
    init {
        require(denominator != 0)
    }
    override fun toString(): String = "${numerator}/${denominator}"
    fun result(): Int = numerator / denominator
}

fun echo(str: String) : String? {
  return str
}
