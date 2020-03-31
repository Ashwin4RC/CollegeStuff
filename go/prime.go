package main

import (
	"fmt"
	"math"
	)

func main(){
	var prime int = 1
	var n int
	fmt.Println("Enter the number")
	fmt.Scan(&n)
	if n<=1 || n%2==0 {
		prime=0
	} else {
		root := math.Sqrt(float64(n))
		for i:=3; float64(i)<=root; i++{
			if n%i==0 {
				prime=0
				break;
			}
		}
	}
	if prime==1{
		fmt.Println("Its a prime.")
	} else {
		fmt.Println("Not prime.")
	}
}