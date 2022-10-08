import java.time.Duration
import java.time.Instant

fun main() {
    val unsortedNumbers = intArrayOf(2, 3, 1, 10, 7, 8)
    val target = 2
    var found = false

    val clockStart = Instant.now();
    for (number in unsortedNumbers) {
        if (number == target) { found = true }
    }
    val clockEnd = Instant.now()

    println(found)
    println("Elapsed time: " + Duration.between(clockEnd, clockStart).toString())
}