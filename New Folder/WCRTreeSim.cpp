#include <QApplication>
#include <QWidget>
#include <QIcon>
#include <QPushButton>
#include <QGridLayout>


class exitSimButton : public QWidget {

public:
  exitSimButton(QWidget *parent = 0);
};

exitSimButton::exitSimButton(QWidget *parent)
    : QWidget(parent){
  QPushButton *quitButton = new QPushButton("Quit", this);
  quitButton->setGeometry(50, 40, 75, 30);

  connect(quitButton, &QPushButton::clicked, qApp, &QApplication::quit);
};

class myLabel : public QWidget {
public:
    myLabel(QWidget *parent);
};

myLabel::myLabel(QWidget *parent) : QWidget(parent){
    label = new QLabel(this);
    label->setGeometry(50, 80, 75, 30);
};

int main(int argc, char *argv[]) {

    QApplication app(argc, argv);

    exitSimButton window;

    window.resize(250, 150);
    window.setWindowTitle("Wildcat Racing's Tree Simulator");
    window.setWindowIcon(QIcon("mopar.png"));
    window.show();

    return app.exec();
}
