package main

import "fmt"

func main(){
	var x, y int64
	fmt.Scan(&x)
	fmt.Scan(&y)
	a  := float64(int64(x))
	b := float64(int64(y))
	minuts := (60.0*12.0)/b
	oil := (a * 60.0)/minuts
	fmt.Printf("%.3f\n", oil)
}
