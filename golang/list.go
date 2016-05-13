package main

import "fmt"
import "container/list"
import "strings"
import "unicode"

type pair struct {
    Key string
    Value string
}

func main() {
    l := list.New()
    l.PushBack(pair{"11", "11"})
    l.PushBack(pair{"22", "22"})

    for e := l.Front(); e != nil; e = e.Next() {
        value := e.Value.(pair)
        fmt.Println(value.Key, value.Value)
    }

    words := "This is a *&**^*good day"
    word := strings.FieldsFunc(words, func(c rune) bool {
        return !unicode.IsLetter(c)
    })
    fmt.Println(len(word))
    fmt.Println(word)

    for _, word := range word {
         fmt.Println(word)
    }
}
