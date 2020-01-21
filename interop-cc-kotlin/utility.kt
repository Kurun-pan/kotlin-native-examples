package utility

//import kotlinx.coroutines.*

object Object {
    val pluginName = "Utility"
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

/*
suspend fun workload(n: Int): Int {
    delay(1000)
    return n
}

fun doAwait() : Boolean {
    val result = GlobalScope.async(Dispatchers.Default) {
        delay(1000)
        println("Coroutines")
        return@async true
    }.await()
    return result
}
 */
 