package main

import s "strings"
import "fmt"

var p = fmt.Println

func main() {
    p("Contains: ", s.Contains("test", "es"))
    p("Count: ", s.Count("test", "t"))
    p("HasPrefix", s.HasPrefix("test", "te"))
    p("HasSuffix", s.HasSuffix("test", "st"))
    p("Index: ", s.Index("test", "e"))
    p("Join: ", s.Join([]string{"a", "b"}, "-"))
    p("repeat: ", s.Repeat("a", 5))

    p("Len: ", len("hello"))

    p("SplitN: ", s.SplitN("a,b,c", ",", 1))
}
