package main

import "fmt"

func main(){
	var x int64
	fmt.Scan(&x)
	year := x/365
	month := (x%365)/30
	days := (x%365)%30
	fmt.Printf("%d ano(s)\n",year)
	fmt.Printf("%d mes(es)\n",month)
	fmt.Printf("%d dia(s)\n", days)
}
