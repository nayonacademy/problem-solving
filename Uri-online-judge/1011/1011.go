package main

import (
	"fmt"
)

func main(){
	var a int64
	var result, r float64
	fmt.Scan(&a)
	r = float64(int64(a))
	result  = (4.0/3.0) * 3.14159 * (r*r*r)
	fmt.Printf("VOLUME = %.3f\n", result)
}
