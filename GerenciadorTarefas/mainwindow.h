#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void inicializarGraficoCPU();
    void inicializarGraficoMemoria();
    void inicializarGraficoCarga();
    void inicializarGraficoTempoDescarga();

private slots:
  void atualizarGraficoCPU();
  void atualizarGraficoMemoria();
  void atualizarGraficoCarga();
  void atualizarGraficoTempoDescarga();

private:
    Ui::MainWindow *ui;
    QTimer dataTimer;
    QTimer memoriaTimer;
    QTimer cargaTimer;
    QTimer tempoDescargaTimer;


};

#endif // MAINWINDOW_H
