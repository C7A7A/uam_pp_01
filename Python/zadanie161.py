x = """ Three Rings for the Elven-kings under the sky,
    Seven for the Dwarf-lords in their halls of stone,
    Nine for Mortal Men doomed to die,
    One for the Dark Lord on his dark throne
    In the Land of Mordor where the Shadows lie. """

splitString = x.split()
counter = 0

for i in splitString:
    if i == "for":
        counter = counter + 1

print(counter)
