/*
 * ConsoleForm.h
 *
 * Created: 22 2018 by Ashley
 *
 * Copyright 2018 Octronic. All rights reserved.
 *
 * This file may be distributed under the terms of GNU Public License version
 * 3 (GPL v3) as defined by the Free Software Foundation (FSF). A copy of the
 * license should have been included with this file, or the project in which
 * this file belongs to. You may also find the details of GPL v3 at:
 * http://www.gnu.org/licenses/gpl-3.0.txt
 *
 * If you have any questions regarding the use of this file, feel free to
 * contact the author of this file, or the owner of the project in which
 * this file belongs to.
 */

#pragma once

#include "AbstractFormController.h"
#include "ui_ConsoleForm.h"
#include <QMenu>

using namespace Ui;

class ConsoleFormController : public AbstractFormController
{
    Q_OBJECT
public:
    ConsoleFormController(QWidget *parent = nullptr);
    ~ConsoleFormController();
    void onCmdClearConsoleClicked();
    int getConsoleMinHeight();
signals:
    void commandSentSignal(QString cmd, int len);
public slots:
    void onComboBoxCommandReturnPressed();
    void onCmdCommandSendClicked();
private:
    ConsoleForm mUi;
    QMenu mSendMenu;
    int mStoredConsoleMinimumHeight;
    int mStoredConsoleHeight;
    int mConsolePureHeight;

    // AbstractFormController interface
public:
    void setupSignalSlots() override;
};
