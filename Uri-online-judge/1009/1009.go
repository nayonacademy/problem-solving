package main

import "fmt"

func main() {
	var name string
	var a, b, result float64
	fmt.Scan(&name)
	fmt.Scan(&a)
	fmt.Scan(&b)
	result = a + (b * 0.15)
	fmt.Printf("TOTAL = R$ %.2f\n", result)
}
