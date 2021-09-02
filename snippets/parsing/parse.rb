require 'csv'
#designed to parse, open and display a csv file, Andrew Tennant

# My first step to solving this problem was to work with my project partner James to decide what we will use.
# We chose to parse a poem by Emily Dickinson, a notable American poet.
# We also chose Ruby as our programming language of choice.
# The first step was to make a parser. This is easy in Ruby with the CSV library.

CSV.parse("C:/Users/pfff1/Documents/GitHub/playground/snippets/parsing/poem.csv")

# Now that the data is parsed it is ready to be output to the screen.
CSV.foreach(("C:/Users/pfff1/Documents/GitHub/playground/snippets/parsing/poem.csv"), headers: true, col_sep: ",") do |row|
    puts row
    puts "\n"
end 