let t = 285, p = 165, h = 143;
while (true) {
  h++;
  const hexagonal = h * (2 * h - 1);
  while (p * (3 * p - 1) / 2 < hexagonal) p++;
  while (t * (t + 1) / 2 < hexagonal) t++;
  if (p * (3 * p - 1) / 2 === hexagonal && t * (t + 1) / 2 === hexagonal) {
    console.log("Next number that is triangular, pentagonal, and hexagonal:", hexagonal);
    break;
  }
}
