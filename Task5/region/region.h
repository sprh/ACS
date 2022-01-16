#ifndef TASK5_REGION_H
#define TASK5_REGION_H


//  Region to check
class Region {
private:
    // Total area
    int area_;
    // Bear's location
    // Equals -1 if this region hasn't a bear
    int bear_location_;

public:
    // Constructor with area and bear's location
    Region(const int &area, const int &bear_location);

    // Returns region area
    [[nodiscard]] int getArea() const;

    // Returns true if this region in the current point has a bear else false
    [[nodiscard]] bool hasBear(const int &at) const;
};


#endif //TASK5_REGION_H
