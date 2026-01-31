#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <cstdlib>
#include <string>
//#include <iostream>
#include <memory>
#include <cstdio>
#include <thread>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

class Info {
public:
    std::string Weather;
    std::string Location;
};

Info weather;

void MainWindow::getWeatherSimple(const std::string& location) {
    std::string command;

    if (location.empty()) {
        command = "curl -s \"https://wttr.in/?format=3\"";
    } else {
        command = "curl -s \"https://wttr.in/" + location + "?format=3\"";
    }

    std::array<char, 128> buffer;
    std::string result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(command.c_str(), "r"), pclose);

    if (!pipe) {
        ui->WeatherLabel->setText("Error executing command");
        return;
    }

    while (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) {
        result += buffer.data();
    }

    weather.Weather = result;
    ui->WeatherLabel->setText(QString::fromStdString(weather.Weather));
}

void MainWindow::on_ConfirmButton_clicked()
{
    weather.Location = ui->LineLocation->text().toStdString();
    std::thread GetWeatherWaiting(&MainWindow::getWeatherSimple, this, weather.Location);
    GetWeatherWaiting.detach();
    ui->WeatherLabel->setText("Waiting...");
}
