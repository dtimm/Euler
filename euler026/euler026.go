/* https://projecteuler.net/problem=26
 * A unit fraction contains 1 in the numerator. The decimal representation of
 * the unit fractions with denominators 2 to 10 are given:
 *
 * 1/2	= 	0.5
 * 1/3	= 	0.(3)
 * 1/4	= 	0.25
 * 1/5	= 	0.2
 * 1/6	= 	0.1(6)
 * 1/7	= 	0.(142857)
 * 1/8	= 	0.125
 * 1/9	= 	0.(1)
 * 1/10	= 	0.1
 * Where 0.1(6) means 0.166666..., and has a 1-digit recurring cycle. It can
 * be seen that 1/7 has a 6-digit recurring cycle.
 *
 * Find the value of d < 1000 for which 1/d contains the longest recurring
 * cycle in its decimal fraction part.
 *
 * David Timm 2014-09-22
 */

package main

import "fmt"
import "math/big"

func main() {
  current := 0
  temp := 0
  max := 0

  for i := 1; i <= 1000; i++ {
    temp = repeat(i)
    if temp < i && temp >= current {
      current = temp
      max = i
    }
  }

  fmt.Printf("%d\t%d\n", max, current)
}

/* Oh god the ugly. I'm so sorry. */
func repeat(num int) int {
  z := big.NewInt(9)
  d := big.NewInt(int64(num))
  k := 1
  for ((z.Mod(z, d)).Cmp(big.NewInt(0))) > 0 && k < num {
    z = z.Add(z.Mul(z, big.NewInt(10)), big.NewInt(9))
    k += 1
  }
  return k
}
