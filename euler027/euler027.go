/* https://projecteuler.net/problem=27
 * Euler discovered the remarkable quadratic formula:
 *
 * n² + n + 41
 *
 * It turns out that the formula will produce 40 primes for the consecutive
 * values n = 0 to 39. However, when n = 40, 402 + 40 + 41 = 40(40 + 1) + 41
 * is divisible by 41, and certainly when n = 41, 41² + 41 + 41 is clearly
 * divisible by 41.
 *
 * The incredible formula  n² − 79n + 1601 was discovered, which produces 80
 * primes for the consecutive values n = 0 to 79. The product of the
 * coefficients, −79 and 1601, is −126479.
 *
 * Considering quadratics of the form:
 *
 * n² + an + b, where |a| < 1000 and |b| < 1000
 *
 * where |n| is the modulus/absolute value of n
 * e.g. |11| = 11 and |−4| = 4
 * Find the product of the coefficients, a and b, for the quadratic
 * expression that produces the maximum number of primes for consecutive
 * values of n, starting with n = 0.
 *
 * David Timm 2014-09-23
 */

package main

import "fmt"
import "math"

func main() {
	max := 0
	maxa := 0
	maxb := 0

	for i := -999; i < 1000; i++ {
		for j := -999; j < 1000; j++ {
			current := generate(i, j)
			if current > max{
				maxa = i
				maxb = j
				max = current
			}
		}
	}

	fmt.Printf("a: %d b: %d\nsequence of primes: %d\n", maxa, maxb, max)
}

func generate(a int, b int) int {
  primes := 0

  for i:=0; i<1000; i++ {
    current := i*i + a*i + b
		if current < 0 {
			current = -current
		}
    if prime(current) {
      primes++
    } else {
			//fmt.Printf("%d isn't prime! %d %d FAIL! Count: %d \n", current)
      return primes
    }
  }
	fmt.Printf("Wow. Maxed it out!\n")
  return primes
}

func prime(number int) bool {
  prime := true
  max := int(math.Sqrt(float64(number))) + 1

  for i := 2; i < max; i++ {
    if number % i == 0 {
      prime = false
    }
  }

  return prime
}
