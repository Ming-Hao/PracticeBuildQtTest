#ifndef MODELBAR_H
#define MODELBAR_H


class ModelBar
{
public:
    ModelBar();

    int val() const;
    void setVal(int newVal);

private:
    int m_val { 42 };
};

#endif // MODELBAR_H
