#include <QtWidgets>
#include <QtSql>

#include "../../Qt5.7.1/Examples/Qt-5.7/sql/connection.h"

void initializeModel(QSqlRelationalTableModel *model)
{
//! [0]
    model->setTable("employee");
//! [0]

    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
//! [1]
    model->setRelation(2, QSqlRelation("city", "id", "name"));
//! [1] //! [2]
    model->setRelation(3, QSqlRelation("country", "id", "name"));
//! [2]

//! [3]
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("Name"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("City"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Country"));
//! [3]

    model->select();
}

QTableView *createView(const QString &title, QSqlTableModel *model)
{
//! [4]
    QTableView *view = new QTableView;
    view->setModel(model);
    view->setItemDelegate(new QSqlRelationalDelegate(view));
//! [4]
    view->setWindowTitle(title);
    return view;
}

void createRelationalTables()
{
    QSqlQuery query;
    query.exec("create table employee(id int primary key, name varchar(20), city int, country int)");
    query.exec("insert into employee values(1, 'Espen', 5000, 47)");
    query.exec("insert into employee values(2, 'Harald', 80000, 49)");
    query.exec("insert into employee values(3, 'Sam', 100, 1)");

    query.exec("create table city(id int, name varchar(20))");
    query.exec("insert into city values(100, 'San Jose')");
    query.exec("insert into city values(5000, 'Oslo')");
    query.exec("insert into city values(80000, 'Munich')");

    query.exec("create table country(id int, name varchar(20))");
    query.exec("insert into country values(1, 'USA')");
    query.exec("insert into country values(47, 'Norway')");
    query.exec("insert into country values(49, 'Germany')");
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    if (!createConnection())
        return 1;
    createRelationalTables();

    QSqlRelationalTableModel model;

    initializeModel(&model);

    QTableView *view = createView(QObject::tr("Relational Table Model Test"), &model);
    view->show();

    return app.exec();
}


