#include "modelbar.h"

ModelBar::ModelBar()
{

}

int ModelBar::val() const
{
    return m_val;
}

void ModelBar::setVal(int newVal)
{
    m_val = newVal;
}
