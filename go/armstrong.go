package main

import(
	"fmt"
	"math"
)

func main(){
	var N,digit,t,t1,r int = 0,0,0,0,0
	var sum float64 = 0
	fmt.Println("Enter the number")
	fmt.Scan(&N)
	t=N
	t1=N
	for t!=0 {
		t=t/10
		digit++
	}
	for t1!=0{
		r=t1%10
		sum+=math.Pow(float64(r),float64(digit))
		t1/=10
	}
	if sum==float64(N) {
		fmt.Println("Its an armstrong num.")
	} else {
		fmt.Println("Not an amstrong number.")
	}
}