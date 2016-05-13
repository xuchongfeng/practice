package main

import "fmt"
import "os"

func main() {
    file := createFile("/tmp/sample")
    defer closeFile(file)
    writeFile(file)
}

func createFile(file string) *os.File{
    fmt.Println("create file")
    f, err := os.Create(file)
    if err != nil {
        panic(err)
    }
    return f
}

func closeFile(file *os.File) {
    fmt.Println("closing")
    file.Close()
}

func writeFile(file *os.File) {
    fmt.Println("writing")
    fmt.Fprintln(file, "date")
}
