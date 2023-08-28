def same_digits?(x, y)
    x.to_s.split("").sort == y.to_s.split("").sort
  end
  
  n = 1
  while true
    if (2..6).all? { |i| same_digits?(n, i * n) }
      puts "Smallest integer x such that 2x, 3x, 4x, 5x, and 6x contain the same digits: #{n}"
      break
    end
    n += 1
  end
  