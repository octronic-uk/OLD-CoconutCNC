// This file is a part of "Cocoanut" application.
// Copyright 2015-2016 Hayrullin Denis Ravilevich

#ifndef HEIGHTMAPBORDERDRAWER_H
#define HEIGHTMAPBORDERDRAWER_H

#include <QObject>
#include "ShaderDrawable.h"

class HeightMapBorderDrawer : public ShaderDrawable
{
public:
    HeightMapBorderDrawer();

    QRectF borderRect() const;
    void setBorderRect(const QRectF &borderRect);

protected:
    bool updateData();

private:
    QRectF m_borderRect;
};

#endif // HEIGHTMAPBORDERDRAWER_H
