def alphabet_position(text)
  result = ""
  text.each_char do |char|
    char_to_num = Hash[('A'..'Z').to_a.zip(1..26)] if char == char.upcase
    char_to_num = Hash[('a'..'z').to_a.zip(1..26)] if char == char.downcase

    if char_to_num
      result << char_to_num[char].to_s + " "
    elsif char.match?(/\p{Alpha}/)
      result << char + " "
    end
  end

  cleaned_result = result.strip.squeeze(" ")
  return cleaned_result
end