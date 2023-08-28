ways = {1}
for _, coin in ipairs({1, 2, 5, 10, 20, 50, 100, 200}) do
    for i = coin, 200 do
        ways[i] = (ways[i] or 0) + ways[i - coin]
    end
end
print("Number of ways to make 200: " .. ways[200])
