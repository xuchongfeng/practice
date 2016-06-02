print (_VERSION)

io.write(_VERSION)

print (string.byte("hello world"))
print (string.char(123))

print (string.len("this a fuck string"))

function add(a, b)
  return a + b
end

print (add(1, 2))

function create_a_counter()
  local count = 0
  return function()
    count = count + 1
    return count
  end
end

local f = create_a_counter()
print (f())
print (f())

local g = create_a_counter()
print (g())
print (g())

print (type(print))
