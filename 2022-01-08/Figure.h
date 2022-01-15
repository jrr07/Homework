#ifndef FIGURE_H
#define FIGURE_H


class Figure{
protected:
    bool color;
public:
    Figure();
    Figure(bool color);
    void setColor(bool color);
    bool getColor();
};


#endif // FIGURE_H
