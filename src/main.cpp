#include <QApplication>
#include <QMainWindow>
#include <QLabel>
#include <QVBoxLayout>
#include <QWidget>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QMainWindow window;
    window.setWindowTitle("SortLab");
    window.resize(1100, 700);

    QWidget *centralWidget = new QWidget();
    QVBoxLayout *layout = new QVBoxLayout(centralWidget);

    QLabel *title = new QLabel("SortLab");
    title->setStyleSheet(
        "font-size: 32px;"
        "font-weight: bold;"
        "color: #60A5FA;"
    );

    QLabel *description = new QLabel("Sorting Algorithm Visualizer");
    description->setStyleSheet(
        "font-size: 16px;"
        "color: #AAAAAA;"
    );

    QPushButton *button = new QPushButton("Generate Array");
    button->setMinimumHeight(40);

    layout->addWidget(title);
    layout->addWidget(description);
    layout->addWidget(button);
    layout->addStretch();

    centralWidget->setStyleSheet("background-color: #151923;");

    window.setCentralWidget(centralWidget);
    window.show();

    return app.exec();
}
