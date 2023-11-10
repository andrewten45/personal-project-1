def same_case(a, b)
    def not_letter?(input)
    non_letter_pattern = /[^A-Za-z]/
      
    return input.match?(non_letter_pattern)
  end
    
    def same_letter_range?(s1, s2)
      uppercase_range = ('A'..'Z')
      lowercase_range = ('a'..'z')
  
      in_uppercase_range = uppercase_range.include?(s1) && uppercase_range.include?(s2)
      in_lowercase_range = lowercase_range.include?(s1) && lowercase_range.include?(s2)
  
    return in_uppercase_range || in_lowercase_range
    end
    
    if not_letter?(a) or not_letter?(b)
      return -1
    elsif same_letter_range?(a, b)
      return 1
    else
      return 0
    end
  end