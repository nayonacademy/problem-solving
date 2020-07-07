package main

import "fmt"

func currencyCounter(amount int64) {
	notes := [7]int64{100, 50, 20, 10, 5, 2, 1}
	noteCounter := [7]int64{0, 0, 0, 0, 0, 0, 0}
	for i := 0; i < 7; i++ {
		if amount >= notes[i] {
			noteCounter[i] = amount / notes[i]
			amount = amount - noteCounter[i]*notes[i]
		}
	}
	for i := 0; i < 7; i++ {
		fmt.Printf("%d nota(s) de R$ %d,00\n", noteCounter[i], notes[i])
	}
}

func main() {
	var x int64
	fmt.Scan(&x)
	fmt.Printf("%d\n",x)
	currencyCounter(x)
}