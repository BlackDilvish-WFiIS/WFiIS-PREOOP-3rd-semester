#include"BContainer.h"

void BContainer::Insert(Box* box)
{
    _boxes.push_back(box);
}

Box* BContainer::operator[](int n)
{
    return _boxes[n];
}

std::ostream& operator<<(std::ostream& os, const BContainer& container)
{
    os<<"Box Container:\n";

    for(std::size_t i=0; i<container._boxes.size(); i++)
        os<<"\t["<<i<<"] "<<*container._boxes[i];

    return os;
}

Box* find_box_optimum(const BContainer& container, Comparator comp)
{
    Box* opt = container._boxes[0];

    for(auto box : container._boxes)
    {
        if(comp(box, opt))
            opt = box;
    }

    return opt;
}

