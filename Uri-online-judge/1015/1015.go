package main

import (
	"fmt"
	"math"
)

func main(){
	var x1, x2, y1, y2, val1, val2 float64
	fmt.Scanf("%f %f", &x1, &y1)
	fmt.Scanf("%f %f", &x2, &y2)
	val1 = math.Pow(x2-x1, 2)
	val2 = math.Pow(y2-y1,2)
	result := math.Sqrt(val1+val2)
	fmt.Printf("%.4f\n", result)
}
