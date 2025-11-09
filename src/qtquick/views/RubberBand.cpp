/*
  This file is part of KDDockWidgets.

  SPDX-FileCopyrightText: 2019 Klarälvdalens Datakonsult AB, a KDAB Group company <info@kdab.com>
  Author: Sérgio Martins <sergio.martins@kdab.com>

  SPDX-License-Identifier: GPL-2.0-only OR GPL-3.0-only

  Contact KDAB at <info@kdab.com> for commercial licensing options.
*/

#include "RubberBand.h"
#include "Config.h"
#include "qtquick/Platform.h"
#include "qtquick/ViewFactory.h"

#include <QQmlEngine>

using namespace KDDockWidgets;

using namespace KDDockWidgets;
using namespace KDDockWidgets::QtQuick;

RubberBand::RubberBand(QQuickItem *parent)
    : View(nullptr, Core::ViewType::RubberBand, parent)
{
    setVisible(false);
    setZ(1000);
    QQuickItem *visualItem = View::createItem(plat()->viewFactory()->rubberBandFilename().toString(), this);
    visualItem->setParent(this);
    visualItem->setParentItem(this);
}
