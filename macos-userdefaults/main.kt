import platform.Foundation.*
import kotlinx.cinterop.*

fun main(args: Array<String>) {
  // ${install dir}/klib/platform/${platform}/

  val userDefaults = NSUserDefaults.standardUserDefaults()
  println("read data = " + userDefaults.integerForKey("integerKeyName"))
  userDefaults.setInteger(100, "integerKeyName")
}
