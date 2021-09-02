require 'csv'
#designed to create a csv file, Andrew Tennant

#I looked up a guide on how to do this from stackoverflow,
#and the user Arun Kumar Mohan suggested this:
CSV.open('C:/Users/pfff1/Documents/GitHub/playground/snippets/parsing/foobar.csv', 'wb') do |csv|
    csv << ['id', "word"]
    csv << ['1', 'foo']
    csv << ['2', 'bar']
end

# The code above produces a csv file which can be later parsed.
# It would fulfill the "lexical analysis" step in compilation.
# Note: It could be improved upon by having user input instead of input set in the code.