package main

import "fmt"

func main(){
	var n int
	fmt.Println("Enter the number of elements")
	fmt.Scan(&n)
	a := make([]int, n)
	var sum int =0
	for i:=0; i<n; i++{
		fmt.Println("Enter array element ",i+1)
		fmt.Scan(&a[i])
		sum+=a[i]
	}
	avg := sum/n
	fmt.Println("Sum is ",sum)
	fmt.Println("Average is ",avg)
}