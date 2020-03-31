package main

import "fmt"

func main(){
	var n int
	fmt.Println("Enter number of elements in array")
	fmt.Scan(&n)
	a := make([]int, n)
	for i:=0; i<n; i++{
		fmt.Println("Enter element number ",i+1)
		fmt.Scan(&a[i])
	}
	for pass:=1; pass<n; pass++{
		var swap int =0
		for scan:=0; scan<n-pass; scan++{
			if a[scan]>a[scan+1]{
				temp := a[scan]
				a[scan]=a[scan+1]
				a[scan+1]=temp
				swap=1
			}
		}
		if swap == 0{
			break
		}
	}
	fmt.Print("Sorted array is ")
	for i:=0; i<n; i++ {
		fmt.Print(a[i]," ")
	}
}