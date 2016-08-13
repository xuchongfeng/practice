local dict = {}

m = rawget(getmetatable(obj) or {}, "__add")
print (m)
