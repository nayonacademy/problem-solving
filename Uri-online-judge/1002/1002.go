package main

import (
	"fmt"
)

func main() {
	var a float64
	var b float64
	fmt.Scan(&a)
	b = 3.14159 * (a * a)
	fmt.Printf("A=%.4f\n", b)
}
