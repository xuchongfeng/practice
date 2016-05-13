package main

import "fmt"

type person struct{
    name string;
    age int;
}

func main() {
    fmt.Println(person{"Bob", 24})
    fmt.Println(person{name: "alice"})

    jack := person{"jack", 32}
    fmt.Println(jack)
}
