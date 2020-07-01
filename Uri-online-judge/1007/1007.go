package main

import "fmt"

func main() {
	var a, b, c, d, e int64
	fmt.Scan(&a)
	fmt.Scan(&b)
	fmt.Scan(&c)
	fmt.Scan(&d)
	e = (a*b - c*d)
	fmt.Printf("DIFERENCA = %d\n", e)
}
