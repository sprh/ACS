#ifndef TASK5_REGION_H
#define TASK5_REGION_H


class Region {
private:
    int area_;
    int bear_location_;

public:
    Region(const int &area, const int &bear_location);

    [[nodiscard]] int getArea() const;

    [[nodiscard]] bool hasBear(const int &at) const;
};


#endif //TASK5_REGION_H
