package main

import "fmt"

func main() {
	var Onecode, Oneamount, Twocode, Twoamount int64
	var Oneprice, TwoPrice, OneTotal, TwoTotal float64
	fmt.Scanf("%d %d %f", &Onecode, &Oneamount, &Oneprice)
	fmt.Scanf("%d %d %f", &Twocode, &Twoamount, &TwoPrice)

	OneTotal = float64(int64(Oneamount)) * Oneprice
	TwoTotal = float64(int64(Twoamount)) * TwoPrice
	fmt.Printf("VALOR A PAGAR: R$ %.2f\n",OneTotal+TwoTotal)
}
