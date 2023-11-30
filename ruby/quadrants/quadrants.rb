def quadrant(x, y)
    if x > 0
      if y > 0
        return 1
        end
      elsif y < 0
      return 3
      end
    if x < 0
      if y > 0
        return 2
        end
      elsif y < 0
      return 4
      end
  end