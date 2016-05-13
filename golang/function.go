package main

import "fmt"

func plus(a int, b int) int {
    return a + b;
}

func plusplus(a, b, c int) int {
    return a + b + c;
}

func values() (int, int) {
    return 4, 5
}

func sum(nums ...int) int {
    result := 0
    for _, num := range nums {
        result += num
    }
    return result
}

func sum1(nums []int) int {
    result := 0
    for _, num := range nums {
        result += num
    }
    return result
}

func main() {
    var a int = 1
    var b int = 2
    c := plus(a, b)
    d := plusplus(a, b, c)
    fmt.Println(d)
    fmt.Println(c)
    fmt.Println(values())

    nums := []int{1, 2, 3, 4}
    fmt.Println(sum(nums...))
    fmt.Println(sum1(nums))
}
