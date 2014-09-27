/* https://projecteuler.net/problem=28
 * Starting with the number 1 and moving to the right in a clockwise direction a 5 by 5 spiral is formed as follows:
 *
 * 21 22 23 24 25
 * 20  7  8  9 10
 * 19  6  1  2 11
 * 18  5  4  3 12
 * 17 16 15 14 13
 *
 * It can be verified that the sum of the numbers on the diagonals is 101.
 *
 * What is the sum of the numbers on the diagonals in a 1001 by 1001 spiral formed in the same way?
 *
 * David Timm 2014-09-27
 */

package main

import "fmt"

func main() {
  // Progressions indicate the next value increase in each direction.
  drprog := 10
  dlprog := 12
  ulprog := 14
  urprog := 16
  dr := 3
  dl := 5
  ul := 7
  ur := 9

  // Initial value is of the center and fist layer.
  width := 3
  total := 25

  for width < 1001 {
    dr += drprog
    drprog += 8
    dl += dlprog
    dlprog += 8
    ul += ulprog
    ulprog += 8
    ur += urprog
    urprog += 8

    total = total + dr + dl + ul + ur
    width += 2
  }

  fmt.Printf("%d\n", total)
}
