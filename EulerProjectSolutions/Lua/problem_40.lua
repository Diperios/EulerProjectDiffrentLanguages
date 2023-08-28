s = ""
i = 1
while #s < 1000000 do
    s = s .. tostring(i)
    i = i + 1
end

product = 1
for i = 0, 6 do
    product = product * tonumber(s:sub(10^i, 10^i))
end
print("Product of the digits: " .. product)
