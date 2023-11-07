class Forest
    def initialize(cols:, rows:)
        @columns = cols
        @rows = rows
        @inhabitants = []
    end

    def place(object:, x:, y:)
        return if x < 0 or x >= @columns or
        y < 0 or y >= @rows

        object.x, object.y = [x, y]
        my_z_index = y * @columns + x

        i = 0
        placed = false
        while i < @inhabitants.length and !placed
            z_index = @inhabitants[i].y * @columns + @inhabitants[i].x
            if my_z_index < z_index
                @inhabitants.insert(i, object)
                placed = true
            end
            i += 1
        end

        @inhabitants.push object if !placed
    end

    def grow
        @inhabitants.each { |inhabitant| inhabitant.grow }
    end

    def to_s
    end
end