//
// Created by tensei on 2024/9/9.
//

#ifndef QCLOUDOBJ_TOPBTNGROUP_H
#define QCLOUDOBJ_TOPBTNGROUP_H

#include "../utils/header/movablewidget.h"

#include <QToolButton>
#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui {
    class TopBtnGroup;
}
QT_END_NAMESPACE

class TopBtnGroup : public MovableWidget {
    Q_OBJECT

public:
    explicit TopBtnGroup(QWidget *parent = nullptr);
    ~TopBtnGroup() override;
    [[nodiscard]] Ui::TopBtnGroup *const getUi() const;
signals:
    void open_myFilePage();
    void open_UserPage();
    void open_downloadListPage();
    void open_uploadListPage();
    void open_shareListPage();
    void sig_uploadfile();
    void sig_changedSelectBtn(QToolButton *btn);


private:
    Ui::TopBtnGroup *ui;
    QToolButton *lastSelectBtn = nullptr;
    QToolButton *currentSelectBtn = nullptr;
    static const QString selectBtnColor;
    static const QString unSelectBtnColor;
};


#endif//QCLOUDOBJ_TOPBTNGROUP_H
