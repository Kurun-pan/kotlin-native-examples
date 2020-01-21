import platform.OSLog.*
import kotlinx.cinterop.*

fun main(args: Array<String>) {
    // ${install dir}/klib/platform/${platform}/OSLog
    val log = OSLog("SAMPLE", "KOTLIN")
    os_log("log", log)
    println("aa")
}
