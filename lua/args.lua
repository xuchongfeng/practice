for key, value in pairs(arg) do
    print(key, value)
end

hello = "hello world"
print (#hello)

a = 10 .. 20
print (type(a))
print (type(nil) == nil)

s = "<![CDATA[\n  Hello world\n]]>"
print(s)

a = {}
a.a = a
print(a.a.a.a)

a = "Hello"
print(a .. " World")
print(a)
