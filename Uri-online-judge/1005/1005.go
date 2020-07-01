package main

import "fmt"

func main() {
	var a, b, c float64
	fmt.Scan(&a)
	fmt.Scan(&b)
	c = ((a * 3.5) + (b * 7.5)) / (3.5 + 7.5)
	fmt.Printf("MEDIA = %.5f\n", c)
}
