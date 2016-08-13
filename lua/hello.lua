local value = 5
print ("hello world", value)

print (value ~= 5)

print (_ENV)

for key, value in pairs(_ENV) do
    print (key, value)
end
