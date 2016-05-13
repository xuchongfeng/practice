package main

import "fmt"
import "strings"

func Index(strs []string, str string) int {
    for i, v := range strs {
        if v == str {
            return i
        }
    }
    return -1;
}

func Include(strs []string, str string) bool {
    return Index(strs, str) >= 0
}

func Any(strs []string, f func(string) bool) bool {
    for _, v := range strs {
        if f(v) {
            return true
        }
    }
    return false
}

func all(strs []string, f func(string) bool) bool {
    for _, v := range strs {
        if !f(v) {
            return false
        }
    }
    return true
}

func Filter(strs []string, f func(string) bool) []string {
    vsf := make([]string, 0)
    for _, v := range strs {
        if f(v) {
            vsf = append(vsf, v)
        }
    }
    return vsf
}

func Map(strs []string, f func(string) string) []string {
    vsf := make([]string, len(strs))
    for i, v := range strs {
        vsf[i] = f(v)
    }
    return vsf
}

func main() {
    var fruits = []string{"apple", "pear", "peach", "plum"}

    fmt.Println(Filter(fruits, func (v string) bool {
         return strings.Contains(v, "e")
    }))

    fmt.Println(Map(fruits, strings.ToUpper))

}
