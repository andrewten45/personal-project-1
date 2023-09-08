require 'csv'
#designed to create a csv file, Andrew Tennant
# Demonstrates role of parsing for creating a syntax tree.

#I looked up a guide on how to do this from stackoverflow,
#and the user Arun Kumar Mohan suggested this:
CSV.open('C:/Users/pfff1/Documents/GitHub/playground/snippets/parsing/foobar.csv', 'wb') do |csv|
    csv << ['id', "word", "type"]
    csv << ['1', 'foo', "string"]
    csv << ['2', 'bar', "string"]
    csv << ['3', '[ ]', "char"]
    csv << ['4', '5', "number"]
end

# The code above produces a csv file which can be later parsed.
# It would fulfill the "lexical analysis" step in compilation.
# Note: It could be improved upon by having user input instead of input set in the code.

#TODO: Add a way to create a more representative tree/ more categories
#What is important: Finding a way to accurately portray the parsing concepts.